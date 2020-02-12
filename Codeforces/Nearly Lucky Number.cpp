/*

 Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

 Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
 
 */

#include<iostream>
using namespace std;
int main()
{
    int count1=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
       if(a[i]=='4'||a[i]=='7')
       {
           count1++;
       }
    }
    if(count1==0)
    {
        cout<<"NO";
    }
   else if(count1==4||count1==7)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
 
}
