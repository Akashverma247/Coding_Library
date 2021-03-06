/*
 Chef loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

 Chef has a positive integer N. He can apply any of the following operations as many times as he want in any order:

 Add 1 to the number N.
 Take some digit of N and replace it by any non-zero digit.
 Add any non-zero leading digit to N.
 Find the minimum number of operations that is needed for changing N to the lucky number
 */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string n;
        cin>>n;
        for(int i=0;i<n.length();i++)
        {
            if(n[i]!='4' && n[i]!='7')
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
