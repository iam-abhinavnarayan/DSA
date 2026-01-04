#include <iostream>
#include <vector>

using namespace std;

vector<int> subarraySum(vector<int> &arr, int target)
{

    int sum = 0;
    int left = 0, right = 0;
    vector<int> ans;

    for (int right = 0; right < arr.size(); right++)
    {
        sum += arr[right];

        while (left < right && sum > target)
        {
            sum -= arr[left++];
        }

        if (sum == target)
        {
            ans = {left + 1, right + 1};
            return ans;
        }
    }
    return {-1};
}

int main()
{
    vector<int> arr = {15, 2, 4, 8, 9, 5, 10, 23};
    int target = 23;
    vector<int> res = subarraySum(arr, target);
    for (int ele : res)
        cout << ele << " ";
    return 0;
}