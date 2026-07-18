#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(int start,vector<vector<int>> adj,int V ){
    queue<int> q;
    vector<int> visited(V,false);
    visited[start]=true;
    q.push(start);
    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int ngbr : adj[node]){
            if(!visited[ngbr]){
                q.push(ngbr);
                visited[ngbr]=true;
            }            
        }
    }
    return ans;
}
int main(){
    int V, E;
    cin>>V>>E;
    vector<vector<int>> adj(V);
    for(int i=0; i<E; i++){
        int u, v ;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start ;
    cin>>start;

    vector<int> ans = bfs(start, adj, V);

    for (int node : ans)
        cout << node << "->";

    return 0;
}