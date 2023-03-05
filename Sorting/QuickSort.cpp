#include<iostream>
using namespace std;

void swap(int *a,int *b)  //it is important to pass argument by address wise otherwise if it would pass by value then it would not work.
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int Partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    int key = 0;
    do
    {
        do{i++;}while(arr[i]<=pivot);
        do{j--;}while(arr[j]>pivot);

        if(i <= j)
        {
            swap(&arr[i],&arr[j]);
        }
    }while(i<=j);

    swap(&arr[l],&arr[j]);
    key = j;

return key; 
}
void QuickSort(int arr[],int l,int h)
{
    int j;
    if(l<h)
    {
        j = Partition(arr,l,h+1);
        QuickSort(arr,l,j);   //we are just keeping element at correct position by using j.
        QuickSort(arr,j+1,h);
    }

}
int Partition1(int arr[],int l,int h)
{
    int pivot = arr[h];
    int x = l-1;
    for(int i = l;i<h;i++)
    {
        if(arr[i]<pivot)
        {
            x++;
            swap(&arr[x],&arr[i]);
        }
    }
    x++;
    swap(&arr[x],&arr[h]);
    return x;
}
void Quicksort1(int arr[],int l,int h)
{
    int j;
    if(l<h)
    {
        j = Partition1(arr,l,h);
        Quicksort1(arr,l,j-1);
        Quicksort1(arr,j+1,h);
    }
}
int main()
{
    int arr[] = {20,3,10,5,100};
    int n = sizeof(arr)/sizeof(int);

    //QuickSort(arr,0,n-1);
    Quicksort1(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}