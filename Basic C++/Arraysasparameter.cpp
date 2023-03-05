#include<iostream>
using namespace std;

int * fun(int n)
{
    int *p1;
    p1 = (int *)malloc(n*sizeof(int));   //this means that we have created an array of size 5 in the heap mem.
    cout<<"Enter the element of array "<<endl;
    for(int i = 0;i<n;i++)
    cin>>p1[i]; //or this is similar to *(p1+i)
    
    return p1;   //it is returning address of the first location of p1 to the p where p will invoke it and use its all sizes

}
int main()
{
    //int *p1 = 5;     this is wrong because we cann't convert int to int*.
    int *p,n;     //since p is pointer so it will take address of someone.
    cout<<"Enter size of array "<<endl;
    cin>>n;
    //here p is taking address of first location of p1(as in fun()).
    p = fun(n);   //here we didn't have created any arrays in main function but it is invoking from the fun function.

    for(int i = 0;i<n;i++)   //pointer variable name and array name is same;
       cout<<p[i]<<" ";
}
// void func(int *arr,int n)   //array is passing by address(Using pointer).* means taking any value but [] means taked only array.
// {
//     arr[0] = 25;
    
// }
// int main()
// {
//     // int *p;  //declaring pointer.

//     // p = fun(5);
//     int a = {1,2,3,4,5};
//     int n = sizeof(a);
//     func(a,n);
//     for(int c:a)
//     {
//         cout<<c<<" ";
//     }
// }