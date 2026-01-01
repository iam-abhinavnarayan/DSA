// Problem:
// Given an array of integers and a target value, find two distinct elements
// in the array such that their sum is closest to the given target.
// Return the pair of elements whose sum has the minimum absolute difference
// with the target. If multiple pairs exist, return any one of them.

// Platform:
// Commonly asked in coding interviews and competitive programming platforms
// such as LeetCode, GeeksforGeeks, and HackerRank.

// Time:
// O(n log n)
// - Sorting the array takes O(n log n)
// - Two-pointer traversal takes O(n)

// Space:
// O(1) extra space
// - Only a few variables are used (excluding input array and output vector)


#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<int> sumClosest(vector<int> &arr, int target)
{

    int i = 0, j = arr.size() - 1;
    int mini = INT_MAX;

    sort(arr.begin(), arr.end());

    vector<int> ans;

    while (i < j)
    {
        int sum = arr[i] + arr[j];
        int nearest = abs(target - sum);

        if (nearest < mini)
        {
            mini = nearest;
            ans = {arr[i], arr[j]};
        }
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {5, 2, 7, 1, 4};
    int target = 10;

    vector<int> res = sumClosest(arr, target);

    for (int num : res)
    {
        cout << num << " ";
    }

    return 0;
}