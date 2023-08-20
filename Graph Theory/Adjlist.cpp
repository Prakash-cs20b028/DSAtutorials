#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1]; // same as vector<vector<int>> adj(n+1);
    adj[0].push_back(0);
    // downward code is for undirected graph.
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    cout<<"Printing undirected graph ";
    for(int i = 1;i<=n;i++)
    {
        cout<<"vertices of "<<i <<" are : ";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
/*  this code is for directed graph.
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<"Printing directed graph "<<endl;
    for(int i = 1;i<=n;i++)
    {
        cout<<"vertices of "<<i <<" are : ";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    } 
*/