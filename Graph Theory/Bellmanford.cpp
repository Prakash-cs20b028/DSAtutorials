#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

void ShortestPath(vector<vector<int>> adj, int src, int des, int n, int m) {
    vector<int> dis(n, INT_MAX);
    dis[src] = 0;
    vector<int> parent(n);
    for(int i = 0;i<n;i++)
    {
        parent[i] = i;
    }
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            int u = adj[j][0];
            int v = adj[j][1];
            int wt = adj[j][2];
            if(dis[u] != INT_MAX && dis[u] + wt < dis[v]) //Applying the relaxation.
            {
                dis[v] = dis[u] + wt;
                parent[v] = u;
            }
        }
    }
    for(auto it: adj)  //Again it is checking for any negative cycle is there or not?
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        if(dis[u] != INT_MAX && dis[u] + wt < dis[v])
        {
            cout<<"There is negative cycle ";
        }
    }

    //Printing the shortest path.
    for(int i = 0; i < n; i++) 
    {
        if(dis[i] == INT_MAX) 
        {
            cout << "INF ";
        }
        else 
        {
            cout << dis[i] << " ";
        }
    }
    cout<<endl;
    for(int i = 1;i<=n;i++)
    {
        cout<<parent[i]<<" ";
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(m, vector<int>(3));
    for(int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[i][0] = u;
        adj[i][1] = v;
        adj[i][2] = wt;
    }
    
    ShortestPath(adj, 1, n - 1, n, m);
    return 0;
}

/*
Idea of the Bellmanford algorithm is that to find the shortest path among the nodes and which could work for the 
negatives edges as well. So in order to do that, i need to make n-1 iteration over the edges, Since it may be 
the case where in every iteration node will be updating. And at the last we get the shortest path between the nodes.
*/
