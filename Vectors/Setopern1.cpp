#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st = {10,1,2,3,10,20,30,25};   //set neglects duplicate value.

    st.insert(50);
    int n = st.size();   //similar like vector     int n = v.size();
    cout<<n<<endl;    
    for(auto a: st)   //auto keyword is important.
    {
        cout<<a<<" ";
    }
    cout<<endl;
    set<int>:: iterator it;
    for(it = st.begin();it!= st.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    st.erase(st.begin());          //erase(pos).
    for(auto a: st)
    {
        cout<<a<<" ";
    }
    cout<<endl;

}