#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,3,5,7,9};  //array created in stack.
    cout<<arr + 1<<" "<<arr + 2<<endl;
    for(int a: arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    int *p;
    p = new int[5];   //Arrays created in heap.
    p[0] = 3;
    p[1] = 6;
    p[2] = 9;
    cout<<p<<endl;
    for(int i = 0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
}