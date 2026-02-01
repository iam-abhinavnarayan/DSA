/*
Platform - LeetCode.
Question - 49.
Problem Name - Group Anagrams. 
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagram(vector<string>& strs){
    
    unordered_map<string , vector<string>> mymap;
    vector<vector<string>> ans ;

    for(int i=0; i<strs.size(); i++){
        string s = strs[i];
        sort(s.begin(),s.end());

        mymap[s].push_back(strs[i]);
    }

    for(auto i : mymap){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    vector<string> arr = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> res = groupAnagram(arr);

    for(auto group : res){
        for(auto word : group){
            cout << word << " ";
        }
        cout << endl;
    }
}