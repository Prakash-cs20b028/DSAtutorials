#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //now we are checking for the nested vector that includes pair inside it.Let's code it now.
    vector<pair<int,int>> v;
    //v = {{1,3},{3,5},{5,7},{7,9},{9,11}};
    int m;
    cout<<"Enter size of Vector ";
    cin>>m;

    for(int i = 0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});  //here no need of index because it wil be keeping at last element as we passed into it.
    }
    //v = {3,5};
    //int n = v.size();
    for(int i = 0;i<m;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}