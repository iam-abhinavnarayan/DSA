// C++ program to find the length of the longest
// subarray having sum k using nested loop
#include <iostream>
#include <vector>
using namespace std;

// Function to find longest sub-array having sum k
int longestSubarray(vector<int>& arr, int k) {
    int res = 0;

    for (int i = 0; i < arr.size(); i++) {
        
        // Sum of subarray from i to j
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
          
          	// If subarray sum is equal to k
            if (sum == k) {
              
              	// find subarray length and update result
              	int subLen = j - i + 1;
                res = max(res, subLen);
            }
        }
    }

    return res;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout << longestSubarray(arr, k) << endl;
    return 0;
}