#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>      //this hedder file is used to do reverse the value of the vector.
using namespace std;

void ShortPath(vector<pair<int,int>> adj[],int src,int des,int n)
{
    int dis[n+1];
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(int i = 1;i<=n;i++)
    {
        dis[i] = INT_MAX;    //initialise dis array with infinity.
    }
    dis[src] = 0;
    pq.push({0,src});   //Pushing source and the their weight.
    int parent[n+1];
    for(int i = 1;i<=n;i++){parent[i] = i;}
    while(!pq.empty())
    {
        //int p = pq.top();
        int dist = pq.top().first;  
        int node = pq.top().second;     //since pq will keep the node with respect to first element.
        pq.pop();
        for(auto it:adj[node])// it keeps pairs.
        {
            int node2 = it.first;
            int wt = it.second;
            if(dist + wt < dis[node2])
            {
                dis[node2] = dist + wt;
                pq.push({dis[node2],node2});
                parent[node2] = node;
            }
        }  
    }
    vector<int> path;
    while(parent[des] != des)
    {
        path.push_back(des);
        des = parent[des];
        
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(auto it: path)
    {
        cout<<it<<" ";
    }   
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<dis[i]<<" ";  //this distance array will return the shortest path between the node.
    // }

}
int main()
{
    int n,m;
    cin>>n>>m;   //Enter num of node and edges
    vector<pair<int,int>> adj[n+1];  //declaring the adjacency list as vec of vec of pair.(pair is used to keep destination node and their weight.)
    for(int i = 0;i<m;i++)      //runs till number of edges.
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});   //this is for directed graph.

    }
    //print the list.
    for(int i = 0;i<n;i++)
    {
        cout<<i<<"->";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<"{"<<adj[i][j].first<<","<<adj[i][j].second<<"}" ;
        }
        cout<<endl;
    }
    ShortPath(adj,1,3,n);  //this line is imp in terms of scource.

}