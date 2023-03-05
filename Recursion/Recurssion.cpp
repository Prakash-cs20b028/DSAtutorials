#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>0)
    {
        return sum(n-1) + n;

    }
    else
     return 0;

}
int factorial(int n)
{
    if(n>0)
    {
        return factorial(n-1) * n;
    }
    else
       return 1;
}
int power(int n , int m)
{
    if(m>0)
    {
        return n * power(n,m-1);
    }
    else
    return 1;
}
int power1(int m,int n)  
{
    if(n==0)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return power1(m*m,n/2);
    }
    else
    {
        return m*power1(m*m,(n-1)/2);
    }
}
int main()
{
    //sum of n natural number.
    int n = 6;
    cout<<"Summation of n number is : "<<sum(n)<<endl;
    cout<<"Factorial of n number is : "<<factorial(n)<<endl;
    cout<<"Power of a numbert is : "<<power(n,4)<<endl;
    cout<<"Power of a numbert is : "<<power1(n,4)<<endl;  //this will decrease numb of iteration.
}