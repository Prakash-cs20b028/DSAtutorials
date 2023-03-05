#include<iostream>
using namespace std;
struct Rectangle
{
    int len;
    int bre;

};
int main()
{
    struct Rectangle *p;  //declaring struct pointer
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle ));  //Initialising pointer to struct rectangle.

    p->len = 50;
    p->bre = 100;
    cout<<p->len <<" "<<p->bre<<endl;

    (*p).len = 500;
    (*p).bre = 1000;
    cout<<(*p).len<<" "<<(*p).bre<<endl;

    
    
}