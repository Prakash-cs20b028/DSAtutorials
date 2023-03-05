#include<iostream>
using namespace std;
struct Matrix
{
    int *A;
    int n;  //we are using it as size of matrix.

};
void setrowmajor(struct Matrix *m,int i,int j,int ele)
{
    if(i>=j)
    {
        m->A[i*(i-1) /2 + j-1] = ele;
    }
    
}
void setcolumnmajor(struct Matrix *m,int i,int j,int ele)  //if we give ele as 0 then it will take as 0 only.
{
    if(i>=j)
    {
        m->A[m->n * (j-1) - (j-2)*(j-1)/2 + i - j] = ele;
    }
}
void display(struct Matrix m)
{
    cout<<"Output is "<<endl;
    for(int i = 1;i<=m.n;i++)
    {
        for(int j = 1;j<=m.n;j++)
        {
            if(i >= j)
            cout<<m.A[m.n * (j-1) - (j-2)*(j-1)/2 + i - j]<<" ";
            //cout<<m.A[i*(i-1)/2 + j-1]  will be used in case of rowmajor.
            else
            cout<<"0"<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    struct Matrix m;
    int x;
    //make array dynamically
    m.A = new int();
    cout<<"Enter size of matrix ";
    cin>>m.n;
    printf("Enter value of matrix by user input \n");
    for(int i = 1;i<=m.n;i++)
    {
        for(int j = 1;j<=m.n;j++)
        {
            cin>>x;
            //setrowmajor(&m,i,j,x);
            setcolumnmajor(&m,i,j,x);
        }
    }
    display(m);
}