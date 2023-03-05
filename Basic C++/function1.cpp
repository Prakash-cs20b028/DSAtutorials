#include<iostream>
using namespace std;
int add(int a,int b)   //function declaration or prototype with formal parameters.
{
    int c = a+b;
    return c;
}
int main()
{
    int x = 10;
    int y = 20;
    int z;

    z = add(x,y);  //passing actual parameter to the add function.And calling to add function.
                   //here value of x and y will be copied in a and b.  

    printf("%d \n", z);

    int *p = &x;

    p++;  //it means that value(address) inside p wil be increased by one and now it wil point to somewhere else.So *p will give other value
    x++;
    //*p++;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<x<<endl;
    cout<<&x;
}