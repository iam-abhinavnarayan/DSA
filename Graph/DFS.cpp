#include <bits/stdc++.h>
using namespace  std;
void dfs(int node,  vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans){
    visited[node]=true;
    ans.push_back(node);
    for(int ngbr : adj[node]){
        if(!visited[ngbr]){
            dfs(ngbr,adj,visited,ans);
        }
    }
}

int main(){
    int V,E;
    cin>> V >> E ;

    vector<vector<int>> adj(V);

    for(int i=0; i<E; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);           
    }
    int start;
    cin>>start;

    vector<int> ans;
    vector<bool> visited(V,false);

    dfs(start,adj,visited,ans);

    for(int i: ans){
        cout<<i<<" ";
    }
    return 0;
}   