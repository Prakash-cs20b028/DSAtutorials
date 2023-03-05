#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<'\n';
    vector<int> :: iterator it;  //iterator is used to visit element one by one.
    it = v.begin();
    //cout<<*it;
    //(*it)++;
    for(it = v.begin();it !=v.end();it++)
    {
        (*it)++;  //it is increasing value of each element by one.
        cout<<(*it)<<" ";  //either any number of bracket is used it won't affect value of *it.
    }
    cout<<endl;
    vector<pair<int,int>> v1 = {{1,2},{2,3},{3,4},{4,5},{5,6}};
    vector<pair<int,int>> :: iterator it1 ;
    for(it1 = v1.begin(); it1 != v1.end();it1++)
    {
        cout<<it1->first<<" "<<(*it1).second<<endl;
    }
}