#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

class DisjointSet  //this class can be use for further purposes.
{
    vector<int> Size,Parent;
    public:
    DisjointSet(int n)  //initialising with the help of constructor.
    {
        Size.resize(n+1);
        Parent.resize(n+1);
        for(int i = 1;i<=n;i++)
        {
            Size[i] = 1;
            Parent[i] = i;
        }
    }
    int FindUltParent(int node)   //function is for finding the ultimate parent of any provided node.
    {
        if(node == Parent[node])
        {
            return node;
        }
        else
        {
            return Parent[node] = FindUltParent(Parent[node]);
        }
    }
    void UnionBySize(int u,int v)   //function is for union of the graphs.
    {
        int u_p_u = FindUltParent(u);
        int u_p_v = FindUltParent(v);
        if(u_p_u == u_p_v)
        {
            return;
        }
        if(Size[u_p_u] < Size[u_p_v])   //here this line is important since it decrease the num of iteration.
        {
            Parent[u_p_u] = u_p_v;
            Size[u_p_v] += Size[u_p_u];
        }
        else
        {
            Parent[u_p_v] = u_p_u;
            Size[u_p_u] += Size[u_p_v];
        }
    }
};
class Solution
{
public:
    void KruskalAlgorithm(vector<vector<int>> adj[],int n)
    {
        //now i need to make the edges and thereafter we need to sort them according to their wt.
        vector<pair<int,pair<int,int>>> edges; //to keep value like (wt,u,v)
        for(int i = 1;i<=n;i++)
        {
            for(auto it:adj[i])
            {
                int u = i;
                int v = it[0];
                int wt = it[1];
                edges.push_back({wt,{u,v}});
            }
        }
        sort(edges.begin(),edges.end());   //here sorting the edge is important such that we could apply algm.
        DisjointSet ds(n);
        int mstsum = 0;
        cout<<"Path of minimum spanning tree is "<<endl;
        for(auto it: edges)
        {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            if(ds.FindUltParent(u) != ds.FindUltParent(v))
            {
                mstsum += wt;
                cout<<u<<"-"<<v<<" ";
                ds.UnionBySize(u,v);
            }
        }
        cout<<endl;
        cout<<"Minimum Spanning weight is "<<mstsum;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj[n+1];  //this is like vector of vector of vectors.
    for(int i = 0;i<m;i++)
    {
        int u,v,wt;
        vector<int> t1,t2;
        cin>>u>>v>>wt;
        t1.push_back(v);
        t1.push_back(wt);
        adj[u].push_back(t1);  //Pushing two vector inside the main vector of vector.
        t2.push_back(u);
        t2.push_back(wt);
        adj[v].push_back(t2);  //Pushing two vector inside the main vector of vector.

    }
    Solution obj;  //this is required to make a object of the class on which we want to have some operation on function.
    obj.KruskalAlgorithm(adj,n);

return 0;
}
/*
The main idea of the Kruskal algorithm is that to find the Minimum Spanning Tree. So to do that we
need to have edges as wt,u,v. We can get it from the adjacency list and after achieve we sort them in ascending
order of wt. We start from the first edges we take u,v and already i have initialised parent,size vector in 
Disjointset class. So with the help of them i will keep joining of each u,v to make minimum spann tree. 

*/