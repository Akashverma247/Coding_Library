/* Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string. */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    string str;
    while(t--)
    {
    cin>>str;
    int len = str.length(),sum=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum = sum +(str[i]-48);
        }
    }
    cout<<sum<<endl;
 }
    return 0;
}
