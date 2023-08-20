#include<iostream>
#include<vector>
#include<map>
using namespace std;
void dfs(int vis[],vector<int> adj[],int start)
{
    vis[start] = 1;
    for(auto a: adj[start])
    {
        if(vis[a] == 0)
        {
            dfs(vis,adj,a);
        }
    }
} //dfs function returns neighbour node of any node.
int NumberofProvinces(vector<int> adj[],int n)
{
    int ans = 0;
    int vis[n+1] = {0};
    for(int i = 1;i<n;i++)
    {
        if(vis[i] == 0)
        {
            ans++;
            dfs(vis,adj,i);
        }   //it ensures that it will visit all neighbour of i.
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int ans = NumberofProvinces(adj,n);
    cout<<ans;
}