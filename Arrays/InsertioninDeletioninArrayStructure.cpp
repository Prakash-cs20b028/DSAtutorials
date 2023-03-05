#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int len;
    int size;  //size means like 10,it includes all the size of array where len = num of element in an array
};
void insert(Array *arr,int key)  //now we are using pointer because i have to change value of array.
{
    arr->A[arr->len] = key;
    arr->len++;
}
void insertinbetween(Array *arr,int ind,int key)
{
    if(ind >= 0 && ind < arr->len)
    {
        for(int i = arr->len;i>ind;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[ind] = key;
        arr->len++;
    }
}
void Delete(struct Array *arr,int index)
{
    if(index >=0 && index <arr->len)
    for(int i = index;i<arr->len;i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->len --;
}
void display(Array arr)
{
    for(int i = 0;i<arr.len;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct Array arr;  //here array is not a pointer so we can carry operation with '.' sign.
    arr.len = 5;
    cout<<"Enter elements of an array \n";
    for(int i = 0;i<arr.len;i++)
    {
        cin>>arr.A[i];
    }
    cout<<"Output is \n";
    display(arr);
    cout<<endl;
    insert(&arr,10);
    display(arr);

    cout<<endl;
    insertinbetween(&arr,3,100);
    display(arr);

    cout<<endl;
    Delete(&arr,0);
    display(arr);
}