/*
If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,r,p,ans=0,l,q;
    cin>>n;
    q=n;
    l=n%10;
    while(q)
    {
      r=q%10;
      p=r;
      q=q/10;
    }
    ans= l + p;
    cout<<ans<<"\n";
  }
    return 0;
}
