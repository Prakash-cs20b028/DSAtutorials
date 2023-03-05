#include<iostream>
using namespace std;
struct Rectangle
{
    int len ;
    int bre;

};
void Area(struct Rectangle r)  //here no benefit of sending len and bre separatly.
{

    cout<<r.len * r.bre<<endl;
}
void Perimeter(struct Rectangle r)
{
    cout<< 2 * (r.len + r.bre)<<endl;
}
int main()
{
    struct Rectangle r;
    r = {0,0};
    cout<<"Enter length and breadth "<<endl;
    cin>>r.len>>r.bre;
    Area(r);       //here no need to send len and bre because we have already initialise len and bre.
    Perimeter(r);

}