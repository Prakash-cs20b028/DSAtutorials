#include<iostream>
using namespace std;
int main()
{
    int a = 10;  //declaring and initialising variable at the same time.
    int &p = a;  //making reference p to a.

    cout<<a<<" " << p<<endl;  //a and p is exactly same.
    a++;
    cout<<a<<" " << p<<endl;
    p++;
    cout<<a<<" " << p<<endl;

    int b = 50;
    p = b;       //here it is not referencing to b, right now it is taking value of b.
    cout<<a<<" " << p<<endl;
}