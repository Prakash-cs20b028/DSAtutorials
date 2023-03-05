#include<iostream>
using namespace std;
int main()
{
    int ch = 'A';
    cout<<ch<<endl;
    int ch1 = '0';  //that's means it is storing value of 1 and in above value of A in ascii code because of int.
    cout<<ch1<<endl;
    char ch2 = '1';
    cout<<ch2<<endl;
    char ch3[5];  //Only declaration.
    cout<<ch3<<endl;
    char ch4[5] = {'a','b','c','d','e'}; //declaration and initialisation togetherly.
    cout<<ch4<<" ";
    cout<<endl;
    char ch5[] = {'a','b','c','d','e','A','B','C','\0'};   // by using '\0' it prints a string.
    //cout<<ch5<<" ";
    cout<<ch5[2];

    printf("%s \n", ch5);

    char ch6[] = "Deepak";  //representing of string in terms of char array.
    cout<<ch6;             //if we try to declare without array then it shows an error.
    string str = "Prakash";
    cout<<str;
    int i;
    for( i = 0;ch5[i] != '\0';i++)
    {

    }
    char ch7[10];
    cout<<i;  //it does not print index of '\0'.
    cout<<"Enter string by the user ";
    //scanf("%s", ch7);   this line and below line is same for entering value of string.
    //cin>>ch7;
      
    gets(ch7);  //this will be used to read any number of words.
    printf("%s",ch7);

    
}