/*
Platform - LeetCode.
Question - 347.
Problem Name - Top K Frequent Elements. 
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> TopKFrequent(vector<int>& arr , int k ){

    unordered_map<int,int> freq;
 
    for(auto i : arr){
        freq[i]++;
    }

    priority_queue<pair<int,int>> pq;
    
    for(auto a : freq){
        pq.push({a.second,a.first});
    }

    vector<int> ans;

    for(int i = k; i>0; i--){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    return ans;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3};

    int k = 2;

    vector<int>result =  TopKFrequent( arr, k );

    for(auto i:result){
        cout<< i <<" ";
    }
    return 0;
}