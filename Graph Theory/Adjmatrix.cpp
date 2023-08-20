#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y; //x for node and y for edges.
    int adj[x+1][x+1] = {{0,0,0,0,0}};  //just initialize one.
    for(int i = 0;i<y;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;  //if we remove this line then code will become for direceted graph.

    }  // till here will be given in every problems.
    for(int i = 1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}