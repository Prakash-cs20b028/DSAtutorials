#include<iostream>
#include<stdio.h>
using namespace std;
struct Rectangle
{
    int len ;   //here size should have been 9 in c++ and 10 in java but its showing 12 becausing char is achieveing upper int datatype
    int bre ;   //thats known as padding.
    char ch;

};
struct Student
{
    int roll;
    string name1;
    char department[2];
    
};
int main()
{
    struct Rectangle r;    //this is only declaration
    r.len = 10;            //below both line is initialisation of len and breadth.
    r.bre = 20;
    //r.ch = 'a';
    //cout<<"length and breadth of rectangle is "<< r.len << " and " << r.bre;
     
    cout<<"size of r " << sizeof(r)<<r.ch<<endl;
    cout<<endl; 

    struct Rectangle r1 = {10,30};          //here following declaration and initialisation together.
    cout<<r1.len<< " and " << r1.bre;
    r1.len = 100;                           //updating values of attributes.
    r1.bre = 50;
    cout<<"\n";
    cout<<r1.len<< " and " << r1.bre << endl;

    struct Student s;
    s.roll = 15;
    s.name1 = "Prakash ";
    s.department[0] = 'h';
    cout<<s.roll<< " and "<<s.name1<<"and "<<s.department[0];
return 0;
}


//      Outcomes 
// we cann't make two main function in same code without calling by main function but we can make any number of structures.
// string is a class in c++ and java too.