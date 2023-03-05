#include<iostream>
using namespace std;
struct Test
{
    int A[5];
    int n;
};
void func(struct Test t1)
{
    t1.A[0] = 10;
    t1.A[3] = 20;
    for(int i = 0;i<5;i++)
    {
        cout<<t1.A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    struct Test t = {{1,2,3,4,5}, 10};
    func(t);

    for(int i = 0;i<5;i++)
    {
        cout<<t.A[i]<<" ";
    }
}