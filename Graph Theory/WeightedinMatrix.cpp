#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int adj[n+1][n+1] = {0,0,0,0};
    for(int i = 0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u][v] = wt;
        adj[v][u] = wt;   //if we remove this line then it becomes directed.

    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}