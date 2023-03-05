#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int len;
    int size;
};
int GetElement(struct Array arr,int ind)  //time complexity = O(1).
{
    if(ind >= 0 && ind < arr.len)
    {
        return arr.A[ind];
    }
    else
    {
        return -1;
    }
}
void SetElement(struct Array *arr,int ind,int element) //time = O(1)
{
    if(ind >=0 && ind < arr->len)
    {
        cout<<"Before adding "<<arr->A[ind]<<" "<<endl;
        arr->A[ind] = element;
        cout<<"After adding "<< arr->A[ind]<<" ";
    }
    else
    {
        cout<<-1;
    }
} 
int MaxElement(struct Array arr)  //time O(n)
{
    int max = arr.A[0];
    for(int i = 0;i<arr.len;i++)
    {
        if(max <= arr.A[i])
        {
            max = arr.A[i];
        }
    }
    return max;
}
int MinElement(struct Array arr)  //time is O(n)
{
    int min = arr.A[0];
    for(int i = 0;i<arr.len;i++)
    {
        if(min >= arr.A[i])
        {
            min = arr.A[i];
        }
    }
    return min;
}
int Sum(struct Array arr)   //time = O(n)
{
    int total = 0;
    int i = 0;
    while(i<arr.len)  //we can use for loop too that will be easier than while loop but it will open your mind
    {
        total = total + arr.A[i];
        i++;
    }
    return total;
}
int main()
{
    struct Array arr = {{10,20,30,40,50,60,100},7,10};  //here we are passing array as value in structure,
    cout<<"Enter index "<<" ";
    int index = 0;
    cin>>index;
    cout<<GetElement(arr,index)<<endl;

    cout<<"Enter an element and index respectively to set at index "<<" ";
    int element = 0;
    int index1 = 0;
    cin>>element>>index1;
    SetElement(&arr,index1,element);  //if i pass arr by address then it makes some difference in answer.
    cout<<endl;
    cout<<"Maximum element is "<<MaxElement(arr)<<endl;
    cout<<"Minimum element is "<<MinElement(arr)<<endl;
    cout<<"Summation of element is "<<Sum(arr)<<endl;
    
}

/*
Traversal
Copying
Reversing
Sorting
Insertion
Deletion
Searching
Merging

*/