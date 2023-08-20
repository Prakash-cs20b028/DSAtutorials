#include<iostream>
#include<map>
#include<queue>
using namespace std;

vector<int> Traversal(map<int,vector<int>> adj,int start)
{
    vector<int> bfs;
    map<int,bool> visited;
    visited[start] = true;
    queue<int>q;
    q.push(start);

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        bfs.push_back(curr);

        for(auto neighbour : adj[curr])   //learning concept.
        {
            if(visited[neighbour] == false)
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    return bfs;
}
int main()
{
    map<int,vector<int>> adj;
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    //downward line can be coded in the traversal function itself.
    map<int,vector<int>>:: iterator it = adj.begin(); //needed to send first element of the adj.
    vector<int> bfs = Traversal(adj,it->first);
    for(auto it: bfs)
    {
        cout<<it<<" ";
    }

}

/*  Below code is reponsible for printing the map.
    for (auto it = adj.begin(); it != adj.end(); ++it) 
    {
        cout <<"List of " <<it->first << " is : ";
        for (int i = 0; i < it->second.size(); i++) 
        {
            cout << it->second[i] << " ";
        }
        cout << endl;
    }
*/