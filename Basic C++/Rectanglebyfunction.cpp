#include<iostream>
using namespace std;
void Area(int l,int b)
{
    cout<<l * b<<endl;
}
void Perimeter(int l,int b)
{
    cout<<2 * (l + b)<<endl;
}
int main()
{
    int len = 0;
    int bre = 0;

    cout<<"Enter length and breadth "<<endl;
    cin>>len>>bre;
    Area(len,bre);
    Perimeter(len,bre);

    return 0;
}