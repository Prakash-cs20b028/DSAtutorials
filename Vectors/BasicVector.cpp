#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(10);  //we can increase its size as requirement but we couldn't in arrays.
    v[2] = 100;
    //v.push_back(4);  // it will add at the last position.
    v.insert(v.begin()+1,10);
    for(int a:v)
    {
        cout<<a<<" ";
    }
}
/*
    v.erase(v.begin() + 1)  it will delete element at index 0+1.
    v.erase(v.begin(), v.begin()+n)  it will delete all element starting from v.begin() till n-1 elelment.
    v.erase(v.begin(), v.end())   it will delete all element from the vector.
    vector<int> v (5,10)   represents vector of size 5 and each of having 10 element.
    v.front()  return first element.
    v.back()  return last element.
    v.clear()  clear all element of vector and make that as empty.

int f(const vector<int>& A) {
...
A[i] = A[i - 1] + 1; // Illegal (A is const)
g(A); // Illegal (parameter of g is not const)
Pi = 3.14; // Illegal (Pi is const)
...
} 


*/