// C++ program to find the length of the longest
// subarray having sum k using nested loop
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to find longest sub-array having sum k
int longestSubarray(vector<int>& arr, int k) {
    int len=0;
       int n=arr.size();
       
       vector<int> prefixSum(n,0);
       prefixSum[0]=arr[0];
       for(int i=1; i<n; i++){
          prefixSum[i]=prefixSum[i-1]+arr[i];
       }
       
       unordered_map<int,int> m;//PrefixSum = first  Index
       
       for(int j=0; j<n; j++){
           
           //case1: subarray from 0 to j.
           if(prefixSum[j]==k){
               len=max(len,j+1);
           }
           //case2: subarray ending at j.
           int val=prefixSum[j]-k;
           if(m.find(val)!=m.end()){
               len=max(len,j-m[val]);
           }
           //store first occurrence only
           if(m.find(prefixSum[j])==m.end()){
               m[prefixSum[j]]=j;
           }
       }
       return len;
}

int main() {
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout << longestSubarray(arr, k) << endl;
    return 0;
}