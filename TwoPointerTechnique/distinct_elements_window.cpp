/*Given an integer array arr[] and a number k.
 Find the count of distinct elements in every
 window of size k in the array.*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> countDistinct(vector<int> &arr, int k)
{

    unordered_map<int, int> freq;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        freq[arr[i]]++;
    }
    ans.push_back(freq.size());

    for (int i = k; i < arr.size(); i++)
    {
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0)
        {
            freq.erase(arr[i - k]);
        }
        freq[arr[i]]++;

        ans.push_back(freq.size());
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;

    vector<int> res = countDistinct(arr, k);
    for (int ele : res)
        cout << ele << " ";
    return 0;
}