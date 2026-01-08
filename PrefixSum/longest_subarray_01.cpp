// C++ program to find the longest subarray with
// equal number of 0s and 1s
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int maxLen(vector<int> &arr)
{

    int len = 0;
    int n = arr.size();
    vector<int> prefixSum(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            prefixSum[i] = prefixSum[i - 1] - 1;
        }
        else
        {
            prefixSum[i] = prefixSum[i - 1] + 1;
        }
    }
    unordered_map<int, int> m; // PrefixSum = first  Index

    for (int j = 0; j < n; j++)
    {

        // case1: subarray from 0 to j.
        if (prefixSum[j] == 0)
        {
            len = max(len, j + 1);
        }
        // case2: subarray ending at j.
        int val = prefixSum[j] - 0;
        if (m.find(val) != m.end())
        {
            len = max(len, j - m[val]);
        }
        // store first occurrence only
        if (m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = j;
        }
    }
    return len;
}

int main()
{
    vector<int> arr = {1, 0, 0, 1, 0, 1, 1};
    cout << maxLen(arr);
}