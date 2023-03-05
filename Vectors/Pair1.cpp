#include<iostream>
using namespace std;

int main()
{
    pair<int,string> p;  //this way we will creat pair, pair takes two value and for printing we add .first and .second
    p = {2,"deepak"};
    p = {3,"Prakash"};
    p = make_pair(4,"Innovation");
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> p1[3];  //creating an array of pairs.It's easy.
    p1[0] = {2,"deepak"};
    p1[1] = {3,"Prakash"};
    p1[2] = {4,"Study"};

    for(int i = 0;i<3;i++)
    {
        cout<<p1[i].first<<" "<<p1[i].second<<endl;
    }
    
}