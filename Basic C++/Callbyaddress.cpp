#include<iostream>
using namespace std;

// call by address is a technique which provides a way to use indirectly variables of the other function.
// and it provides how to change value with having just void data types.
void swap(int *x,int *y)  //we declared pointer members
{
    int temp = *x;   //we are using *x because of the nature of x is pointer
    *x = *y;
    *y = temp;

//    return *x;       we can add any number of return 
//    return *y;
}
int main()
{
    int a = 30;
    int b = 50;

   // int *p = a; this is wrong declaration.
    
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}
//   Below code is for call by value


// void swap(int a,int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;

// }
// int main()
// {
//     int a = 15;
//     int b = 30;

//     swap(a,b);
//     cout<<a <<" "<<b<<endl;

// }