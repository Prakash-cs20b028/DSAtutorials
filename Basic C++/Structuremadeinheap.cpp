#include<iostream>
using namespace std;
struct Rectangle
{
    int len;
    int bre;
};
//now i will create struct variable in heap.
struct Rectangle *fun()  //this is representing a pointer fun which will return address of object of Rectangle struct.
{
    //it will create object with the help of pointer
    struct Rectangle *p;
    // now time is to create mem in heap. So it will use.
    //p = new Rectangle;  
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));   //this is used in c and c++ both but upper part is used in only in c++.
    p->len = 1;
    p->bre = 2;
    return p;     //since p will be pointing to some memory address in heap and also it will be keeping address of that mem. 

}
int main()
{
    struct Rectangle *p1;
    p1 = fun();            //it wil be getting first address of mem.
    cout<<p1->len <<" "<<p1->bre<<endl;
}
/*
     below code is used for call by address.

void fun(struct Rectangle *r1)
{
    r1->len = 20;
    //r1->bre = 30;
    cout<<r1->len <<" "<<r1->bre<<endl;
}
int main()
{
    struct Rectangle r = {10,5};
    fun(&r);
    cout<<r.len<<" "<<r.bre<<endl;
}*/

//below functin is used as call by value and call by adress.

// void fun(struct Rectangle &r)
// {
//     r.len = 150;
//     cout<<r.len<<" "<<r.bre<<endl;
// }
// int main()
// {
//     struct Rectangle r;
//     r.len = 100;
//     r.bre = 50;

//     fun(r);
//     cout<<r.len<< " " <<r.bre<<endl;
// }