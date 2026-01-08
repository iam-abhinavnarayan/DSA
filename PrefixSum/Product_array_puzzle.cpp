// Function to calculate the product of all
// elements except the current element

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &arr)
{

    int n = arr.size();
    vector<int> prefixProd(n);
    vector<int> suffixProd(n);

    prefixProd[0] = arr[0];
    suffixProd[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefixProd[i] = prefixProd[i - 1] * arr[i]; 
        //Multiplying every element of the array from start.
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffixProd[i] = suffixProd[i + 1] * arr[i];
        //Multiplying every element of the array from end.
    }

    vector<int> ans(n, 0);

    ans[0] = suffixProd[1];
    ans[n - 1] = prefixProd[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        ans[i] = prefixProd[i - 1] * suffixProd[i + 1];
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int> res = productExceptSelf(arr);

    for (int val : res)
        cout << val << " ";
}
