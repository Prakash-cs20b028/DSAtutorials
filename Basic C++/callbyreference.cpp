#include<iostream>
using namespace std;
void swap(int &x,int &y)   //it shows that both x and a as well as y and b are same.
{
    int temp = x;
    x = y;
    y = temp;
    
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);

    printf("%d %d", a,b);
}