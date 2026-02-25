#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& ans)
{
    vis[node] = 1;
    ans.push_back(node);
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            dfs(it, adj, vis, ans);
        }
    }
}
void print(const vector<int>& ans)
{
    for(auto x : ans)
        cout << x << " ";
}
int main()
{
    int n,e;
    cin >> n >> e;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int start;
    cin >> start;
    vector<int> vis(n+1,0);
    vector<int> ans;
    dfs(start,adj,vis,ans);
    print(ans);
}