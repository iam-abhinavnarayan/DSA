#include <iostream>
#include <vector>

using namespace std;

int reverseArray(vector<int> &arr)
{

    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        swap(arr[i++], arr[j--]);
    }
}

int main()
{
    vector<int> arr = {1, 4, 3, 2, 6, 5};

    reverseArray(arr);

    for (int n : arr)
    {
        cout << n << " ";
    }
    return 0;
}