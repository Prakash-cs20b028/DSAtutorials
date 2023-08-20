#include<iostream>
#include<vector>
using namespace std; 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];  //vec of vec of pair.
    for(int i = 0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<"vertex and pair of "<<i<<" are : ";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<"{ "<<adj[i][j].first<<" , "<<adj[i][j].second<<" } "<<" ";
        }
        cout<<endl;
    }
}