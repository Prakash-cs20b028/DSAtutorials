#include<iostream>
using namespace std;
struct LinearSearch
{
    int A[10];
    int len;
    int size;
};
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int linearsearch(struct LinearSearch arr,int key)
{
    int val = -1;
    for(int i = 0;i<arr.len;i++)
    {
        if(arr.A[i] == key)
        {
            swap(&arr.A[i],&arr.A[i-1]);
            val = i-1;
            //break;
        }
        
    }
return val;
}
int main()
{
    //now this time is for declaration.
    struct LinearSearch arr = {{2,7,5,6,5},5,10};
    int key = 6;
    
    if(linearsearch(arr,key) >=0)
    {
        cout<<"Element is found at index "<<linearsearch(arr,key);
    }
    else
    {
        cout<<"Element doesn't found ";
    }

return 0;
}