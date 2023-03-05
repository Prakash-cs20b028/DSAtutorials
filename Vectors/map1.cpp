#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;  //it will remove duplicate index.
    m[0] = "deep";
    m[1] = "deep";
    m[1] = "deepak";
    m[1] = "deep";
    m[2] = "science";
    
    //m.erase(0);  //it will erase key 0 and its data.
    //m.clear();  this func will clear all the values.
    //map<int,string> :: iterator it1;
    
    for(auto it: m)  //here this it is just a value.So we used . operator.
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(auto it = m.begin();it!=m.end();it++)  //here this it is an iterator.
    {
        cout<<it->first<<endl;
    }
    
    
}