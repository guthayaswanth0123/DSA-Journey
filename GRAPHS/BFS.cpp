#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<vector<int>>& adj,int start,int n){
    vector<int>vis(n,0);
    vector<int>ans;
    queue<int>q;
    vis[start]=1;
    q.push(start);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            if(vis[it] != 1){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return ans;
}
void print(vector<int>& ans){
    for(auto x:ans){
        cout<<x<<" ";
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cin>>start;
    vector<int>result=bfs(adj,start,n);
    print(result);
}
