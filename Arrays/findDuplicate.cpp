#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Step 1: Detect the cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Step 2: Find the entrance of the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;  // duplicate number
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << "Duplicate number is: " << findDuplicate(nums) << endl;

    return 0;
}
