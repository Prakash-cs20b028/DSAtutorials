#include<iostream>
using namespace std;
struct Array
{
    int *A;
    int len;
    int size;
};
void display(struct Array arr)
{
    for(int i = 0;i<5;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    //declare array
    struct Array arr;
    int len;
    cout<<"enter length of array ";
    cin>>len;
    arr.A = new int[len];  //created array in heap.

    for(int i = 0;i<len;i++)
    {
        cin>>arr.A[i];
    }
    display(arr);   //passing structure.
    
}