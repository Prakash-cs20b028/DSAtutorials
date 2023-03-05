#include<stdio.h>

int main()
{
    printf("hello world ");
    int a[10] = {1,2,3};
    for(int i = 0;i<2;i++)
    {
        printf("%d", a[i]);
        
    }
    int n = sizeof(a);
    printf("%d", n);
}