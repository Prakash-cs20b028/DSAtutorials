#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Rearrange(int arr[],int n)
{
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(arr[i] < 0)
        {
            i++;
        }        
        if(arr[j] > 0)
        {
            j--;
        }       
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
        
    }
}
void Display(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,3,-1,-5,-7,8,-2,10};

    int n = sizeof(arr)/sizeof(arr[0]);
    Rearrange(arr,n);
    Display(arr,n);

return 0;
}