#include<iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
};
void fun(struct Student *s2)
{
    s2->name = "Deepak loves environment";
    cout<<s2->name<<" "<< s2->roll<<endl;
}
int main()
{
    struct Student s1 = {"prakash" , 28};
    
    fun(&s1);
    cout<<s1.name<<" "<<s1.roll;
   

}