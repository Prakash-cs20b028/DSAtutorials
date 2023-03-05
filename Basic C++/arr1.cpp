#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    
    int a[5]; // declaration of arrays of size of 5.Its content will be stored in stack with multiply with number of bytes.
    int b[5] = {1,2,3,4,5}; //left part is declaration and right part is initialisation part.

    // int d[]; //this is false but
    int e[] = {1,2,3};   //if we initialise the elements of arrays then it is also fine.
    int n = sizeof(a);
    cout<<"size of memory location is "<<n<<endl;   //one integer costs four bytes. so result will be 20.
    for(int i =0 ;i<5 ;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // for(int c: b)   These code is used for the fast coding things.
    // {               this is known as for each loop
    //     cout<<c<<" ";
    // }
    int arr[] = {10,20,30,40,50,60,70,80};
    int m = sizeof(arr)/sizeof(arr[0]);
    cout<<m;
    return 0;
}