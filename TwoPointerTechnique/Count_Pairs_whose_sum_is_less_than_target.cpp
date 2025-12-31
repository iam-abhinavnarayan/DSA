#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countPairs(vector<int> &arr, int target)
{

    int count = 0;

    sort(arr.begin(), arr.end());

    int i = 0, j = arr.size() - 1;

    while (i < j)
    {

        int sum = arr[i] + arr[j];

        if (sum < target)
        {
            count += j - i;
            i++;
        }
        else
        {
            j--;
        }
    }

    return count;
}
int main()
{
    vector<int> arr = {5, 2, 3, 2, 4, 1};
    int target = 5;

    cout << countPairs(arr, target) << " ";

    return 0;
}