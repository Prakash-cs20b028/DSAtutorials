#include<iostream>
#include<vector>
using namespace std;
void printvector(vector <int> v)
{
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v[4];  //this is vector of arrays.earlier we had only one vector but here 10 vec like v1,v2..v10

    
    for(int i = 0;i<4;i++)  //represents 0th,1th , 2th,3th vector
    {
        cout<<"Enter size of "<<i<<"th vector ";
        int x;   //represent size of vectors like 0th , 1th,2th
        cin>>x;
        cout<<"Enter elements in vector "<<endl;
        for(int j = 0;j<x;j++)
        {
            int n;
            cin>>n;
            v[i].push_back(n);
        }
    }
    for(int i = 0;i<4;i++)
    {
        printvector(v[i]);
        
    }
}