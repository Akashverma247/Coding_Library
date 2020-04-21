/*
Write a program, which takes an integer N and if the number is less than 10 then display "What an obedient servant you are!" otherwise print "-1".
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<10)
        cout<<"What an obedient servant you are!"<<endl;
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
