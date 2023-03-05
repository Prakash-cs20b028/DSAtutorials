#include<iostream>
using namespace std;
int main()
{
    int data = 10;   //data variable declaration and initialisation.
    int *p;   //declaring address variable
    p = &data;
    printf("%d \n", p);  //it is data in pointer variable. that is similar to address of data.
    printf("%d \n", data);
    cout<<*p<<"\n";
    printf("%d", &data);
    cout<<endl;


    int b = 150;
    int *p1;
    p1 = (int *)malloc(sizeof(int));  //here it is creating variablesl in heap and refering with pointer
    // or we can denote like below code also.

    int *p2 = new int();
    
    p2 = &b;
    cout<<*p2;
    cout<<sizeof(p2);
}