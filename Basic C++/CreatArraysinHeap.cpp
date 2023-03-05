#include<iostream>
using namespace std;
struct Test
{
    int A[1];
    int n;
};
struct Test *fun(int n)
{
    struct Test *p;
    p = new Test;
   
    cout<<"Enter arrays elements ";
    for(int i = 0;i<n;i++)
    {
        cin>>p->A[i];
    }
    p->A[2] = 20;
    return p;
    
}
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    struct Test *p1 = fun(n);
    
    for(int i = 0;i<n;i++)
    {
        cout<<p1->A[i]<<" ";
    }
}