/*
Chef has just started Programming, he is in first year of Engineering. Chef is reading about Relational Operators.
Relational Operators are operators which check relatioship between two values. Given two numerical values A and B you need to help chef in finding the relationship between them that is,

First one is greater than second or,
First one is less than second or,
First and second one are equal.

 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a<b)
        cout<<"<"<<endl;
        else if(a>b)
        cout<<">"<<endl;
        else
        cout<<"="<<endl;
    }
    return 0;
}
