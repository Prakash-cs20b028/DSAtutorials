#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool CheckCyclic(vector<int> adj[], int vis[], int n, int start, int parent)
{
    vis[start] = 1;
    for (auto a : adj[start])
    {
        if (!vis[a])
        {
            if (CheckCyclic(adj, vis, n, a, start))
                return true;
        }
        else if (a != parent)
            return true;
    }
    return false;
}

bool IsCyclic(vector<int> adj[], int vis[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (CheckCyclic(adj, vis, n, i, -1))
                return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // Remove the following line if the graph is undirected
        adj[v].push_back(u);
    }
    int vis[n + 1] = {0};
    bool flag = IsCyclic(adj, vis, n);
    if (flag)
        cout << "Cyclic";
    else
        cout << "Not Cyclic";
    return 0;
}
