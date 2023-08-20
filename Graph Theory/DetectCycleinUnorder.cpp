#include<iostream>
#include<queue>
#include<vector>
using namespace std;

bool CheckCyclic(vector<int> adj[],int vis[],int n, int start)
{
    
    queue<pair<int,int>>q;
    vis[start] = 1;
    q.push({start,-1});
    while(!q.empty())
    {
        int p = q.front().first;
        int parent = q.front().second;
        q.pop();
        for(auto a: adj[p])
        {
            if(!vis[a])
            {
                vis[a] = 1;
                q.push({a,p});
            }
            else if(a != parent)
            {
                return true;
                
            }
        }
    }
return false;
}
void Check(int vis[],vector<int> adj[],int n)
{
    bool flag = false;
    for(int i = 1;i<=n;i++)
    {
        if(!vis[i])
        {
            
            if(CheckCyclic(adj,vis,n,i))
            {
                flag =  true;
            }
            
        }

    }
    if(flag == true){cout<<"Cyclic";}
    else{cout<<"Not Cyclic";}

}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n+1] = {0};
    
    Check(vis,adj,n);
    
}

/*for(int i = 1;i<n;i++)
    {
        cout<<"List of "<<i <<" : ";
        for(int j = 0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/