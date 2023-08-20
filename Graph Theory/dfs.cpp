#include<iostream>
#include<map>
#include<vector>
#include<stack>
using namespace std;

vector<int> Traversal(map<int,vector<int>> adj,int start)
{
    map<int,bool> vis;
    vector<int>dfs;
    stack<int> st;
    vis[start] = true;
    st.push(start);
    while(!st.empty())
    {
        int p = st.top();
        st.pop();
        dfs.push_back(p);
        
        for(auto a = adj[p].rbegin(); a != adj[p].rend(); ++a)   //learning concept.
        {
            if(vis[*a] == false)
            {
                vis[*a] = true;
                st.push(*a);
            }
        }
    }
    return dfs;
}
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,vector<int>> adj;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }  //completion of adj list.
    map<int,vector<int>> :: iterator it = adj.begin();
    int start = it->first;
    vector<int> dfs = Traversal(adj,start);
    for(auto a: dfs)
    {
        cout<<a<<" ";
    }
}