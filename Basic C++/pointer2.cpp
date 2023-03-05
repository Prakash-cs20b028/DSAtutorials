#include<iostream>
using namespace std;
struct Rectangle
{
    int len;
    int breadth;
    int height;
    int a;
    int b;
    int c;
    int ch;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;

}r1;   //declared struct variable name as r1.
int main()
{
    int a[] = {1,2,3,4,5};  //it is created in stack only.
    int *p;
    p = a;   //pointer name is similar to array name.

    for(int i = 0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

    //int *p1 =(int *)malloc(5*sizeof(int));
    //or it can be defined as below code 
    int *p1 = new int[5];   //representing array of size 5 which is created in heap.
    p1[0] = 10;
    p1[1] = 20;
    p1[2] = 30;
    p1[3] = 40;
    p1[4] = 50;
    for(int i = 0;i<5;i++)
    {
        cout<<p1[i]<<endl;
    }

    int *c1;
    char *c2;
    float *c3;
    double *c4;
    long *c5;
    //struct Rectangle *r2;
    
    cout<<sizeof(c1)<<endl;    //this size of pointer is 8 and it is independent on data type of variable either is it of
    cout<<sizeof(c2)<<endl;    // int , float, char , long.
    cout<<sizeof(c3)<<endl;
    cout<<sizeof(c4)<<endl;
    cout<<sizeof(c5)<<endl;
    cout<<sizeof(r1)<<endl;   //But in case of struct, it depends on its parameter sizes.
}