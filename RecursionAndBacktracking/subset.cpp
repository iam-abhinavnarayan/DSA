/*
 * Problem: LeetCode #78 - Subsets
 * Language: C++
 * Approach: Backtracking (DFS)
 * Time Complexity: O(n * 2^n)
 * Space Complexity: O(n)
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;

    void printSub(int idx, vector<int>& nums, vector<int>& curr) {
        // Base case
        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // Include current element
        curr.push_back(nums[idx]);
        printSub(idx + 1, nums, curr);

        // Backtrack
        curr.pop_back();

        // Exclude current element
        printSub(idx + 1, nums, curr);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        printSub(0, nums, curr);
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.subsets(nums);

    cout << "All subsets are:\n";

    for (auto subset : result) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}