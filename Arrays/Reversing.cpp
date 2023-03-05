#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int len;
    int size;
};
void Reverse(struct Array *arr)   //auxiliary method
{
    int *B;
    B=new int[arr->len];  //creating an array in heap and pointing by pointer B.
    for(int i = arr->len-1,j=0;i>=0;i--,j++)
    {
        B[j] = arr->A[i];
    }
    for(int i = 0;i<arr->len;i++)
    {
        arr->A[i] = B[i];
    }
    
}
void Reverse2(struct Array arr)   //reverse by brute force methods
{
    for(int i = 0,j=arr.len-1;i<=j;i++,j--)
    {
        int temp = arr.A[i];
        arr.A[i] = arr.A[j];
        arr.A[j] = temp;
    }
    for(int i = 0;i<arr.len;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
void Display(struct Array arr)
{
    for(int i = 0;i<arr.len;i++)
    {
        printf("%d ", arr.A[i]);
        
    }
    
}
int main()
{
    struct Array arr={{1,2,4,6,8,10,9},7,10};
    Reverse2(arr);

    printf("\n");
    Reverse(&arr);   
    Display(arr);

    
    
}