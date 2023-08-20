#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void PrimsAlgorithm(vector<pair<int,int>> adj[],int src,int n)
{
    int vis[n];
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        vis[i] = 0;   //initialising vis array as 0 at all its index.
    }
    vector<pair<int,int>> mst;
    priority_queue<vector<int>> pq;
    pq.push({0,0,-1});
    vis[src] = 1;
    while(!pq.empty())
    {
        vector<int> v = pq.top();
        int wt = v[0];
        int node = v[1];
        // int par = v[2];
        pq.pop();
        for(auto it:adj[node])
        {
            int wt2 = it.second;
            int node2 = it.first;
            if(vis[node2] == 0)
            {
                vis[node2] = 1;
                sum = sum + wt2;
                mst.push_back({node,node2});
                pq.push({wt2,node2,node});
            }
        }

    }
    for(int i = 0;i<mst.size();i++)
    {
        cout<<mst[i].first<<"->"<<mst[i].second<<endl;
    }
    cout<<endl;
    cout<<sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    for(int i = 0;i<m;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    for(int i = 0;i<n;i++)
    {
        cout<<i<<"->";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<adj[i][j].first<<","<<adj[i][j].second<<" ";
        }
        cout<<endl;
    }
    PrimsAlgorithm(adj,0,n);

}