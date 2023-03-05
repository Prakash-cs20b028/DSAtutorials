#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> :: iterator it;

    for(int value: v)   //range based loop.
    {
        
        cout<<value<<" ";
    }
    cout<<endl;
    for(auto value: v)   //auto based loop.
    {
        value++;
        cout<<value<<" ";
    }
    cout<<endl;
    for(auto it = v.begin();it!=v.end();it++)   
    {
        (*it)+=2;
        cout<<*it<<" ";
    }
    auto a = '2';  //we can write any datatypes by using auto keyword.
    cout<<endl<<a<<endl;

    return 0;
}