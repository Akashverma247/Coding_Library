/*
 Chef is playing a game. Currently in the game, he is at a field full of stones. There are total N kinds of stones. There is unlimited supply of each kind of stone.

 Chef knows that one stone of kind i needs Ai minutes to pick it from the ground and it will give Chef a profit of Bi Rs.

 Chef has K minutes of free time. During this free time, Chef want to pick stones so as to maximize his profit. But he can not pick stones of different kinds, he has to pick stones of a single kind.

 Please help Chef to find the maximal possible profit.
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long int n,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cin>>k;
       long int a[n];
         long int b[n];
        for(int j=0;j<n;j++)
        
            cin>>a[j];
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
          if(k>=a[j])
          {
              b[j]=(int)(k/a[j])*b[j];
              
          }
        }
            int m = *max_element(b,b+n);
       cout<<m<<endl;
    }

    
    
    return 0;
}
