#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3,5,2,21,30,35};
   
    v.push_back(50);
    int n = v.size();    //similar like set where   int m = st.size(). 

    cout<<n<<endl;
    for(int i = 0;i<v.size();i++)     //Normal for loop to print vector.
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(auto a: v)                //this is the auto based loop.
    {
        cout<<a<<" ";
    }
    cout<<endl;
    vector<int>:: iterator it;
    for(it = v.begin();it!= v.end();it++)  //iterative based for loop.
    {
        cout<<*it<<" ";                   //here it is iterator so we need to add * like what we do in pointer.
    }
    cout<<endl;

    v.push_back(100);      //push_back
    v.push_back(60);
    for(auto a: v)
    {
        cout<<a<<" ";
    }

    cout<<endl;

    v.pop_back();         //pop_back
    for(auto a: v)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,7);       //insert(pos,value)
    for(auto a: v)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+7);        //erase(pos)
    for(auto a: v)
    {
        cout<<a<<" ";
    }
   
}