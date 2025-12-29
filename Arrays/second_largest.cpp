/*
Problem: Second Largest Element in an Array
Source: GeeksforGeeks
Approach: Single traversal using two variables
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int largest=INT_MIN , secondLargest=INT_MIN ;
        for(int i=0;i<n;i++){
            
            if(arr[i]>largest){
                secondLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>secondLargest){
                secondLargest=arr[i];
            }
        }
        return secondLargest;
    }

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
    return 0;
}
