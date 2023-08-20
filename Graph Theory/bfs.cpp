#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> Traversal(vector<int> adj[],int n)
{
    int vis[n] = {0};  //visited array initialize with 0 at its all element.
    queue<int>q;
    vector<int>bfs;  //returning bfs.
    vis[0] = 1;
    q.push(0);
    while(!q.empty())
    {
        int p = q.front();q.pop();
        bfs.push_back(p);   //this is taking our result.
        for(auto it: adj[p])
        {
            if(vis[it] == 0)
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    vector<int>bfs;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bfs = Traversal(adj,n);
    for(auto it : bfs)
    {
        cout<<it<<" ";
    }

}