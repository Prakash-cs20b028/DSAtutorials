#include<iostream>
using namespace std;

void set(int arr[],int i,int j,int ele)  //setting value of diagonal matrix.
{
    if(i == j)
    {
        arr[i-1] = ele;
    }
    

}
int get(int arr[],int i,int j)
{
    if(i == j)return arr[i-1];
    else return 0;
}
void display(int arr[],int n)   //displaying the value of matrix.
{
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(i == j)
                cout<<arr[i]<<" ";   //if there would be two stmts then i would have used bracket but it's fine here.
            else
            {
                cout<<"0"<<" ";
            }
        }    
        cout<<endl;
    }
}
int main()
{
    int *arr = new int();  //it will take dynamically size of array.
    
    set(arr,1,1,5);
    set(arr,2,2,2);
    set(arr,3,3,3);
    set(arr,4,4,4);

    //if i want to get any element then use get function.
    cout<<"Value at index 1 and 1 is " <<get(arr,1,1)<<endl;
    display(arr,4);
}
/*
struct Matrix
{
    int *arr = new int();   //we are creating array dynamically.
    // int arr[10] represent that i am declaring array statically that is size wil be declared at compile time.
    int n;
};
void set(struct Matrix *m,int i,int j,int ele)
{
    m->n = i;  //from here we can pass size of array in display fun by updating the value of n.
    if(i == j)
    {
        m->arr[i-1] = ele;
    }
    
}
void display(struct Matrix m)
{
    for(int i = 0;i<m.n;i++)
    {
        for(int j = 0;j<m.n;j++)
        {
            if(i == j)
            {
                cout<<m.arr[i]<<" ";
            }
            else
            {
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    struct Matrix m;
    
    set(&m,1,1,10);
    set(&m,2,2,20);
    set(&m,3,3,30);
    set(&m,4,4,40);
    set(&m,5,5,50);
    

    display(m);
}


*/