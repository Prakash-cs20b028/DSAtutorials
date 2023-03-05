#include<iostream>
using namespace std;
struct Create   //here we are creating an array as structure to understand how it works
{             //in machine and based on this i wil use concept to create Node in LL.
    int A[10];
    int length;
    int size;
};
void display(struct Create arr)
{
    int n = arr.size;
    for(int i = 0;i<n;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct Create arr = {{1,3,5,7,9},10,5};

    display(arr);  //here we don't need to send sizes as the other parameter because
               //i have already sent it as a sturecture.
}