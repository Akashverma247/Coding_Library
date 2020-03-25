/*
Today is Chef's birthday and he is looking forward to his gift. As usual, the gift is hidden and Chef has to follow a sequence of N instructions to reach it.
 Initially, Chef is standing in the cell (0,0) of a two-dimensional grid. The sequence of instructions is given as a string S. If we denote Chef's current cell by (x,y), each character of S corresponds to an instruction as follows:
 'L' means to go left, i.e. to the cell (x−1,y)
 'R' means to go right, i.e. to the cell (x+1,y)
 'U' means to go up, i.e. to the cell (x,y+1)
 'D' means to go down, i.e. to the cell (x,y−1)
 In addition, Chef should never perform multiple consecutive moves along the same axis of the grid. If there are multiple consecutive instructions to move along the same axis (left/right or up/down), he should perform only the first of these moves.

 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
int n=0;
for(int i=0;i<t;i++)
{
    int x=0, y=0;
   cin>>n;
   char a[n];
   for(int j=0;j<n;j++)
   cin>>a[j];
   
   
   
   int t=0;
   for(int j=0;j<n;j++)
   {
     if(a[j]=='L'||a[j]=='R')
     {
        if(t==1)
        continue;
        else
        {
          if(a[j]=='L')
          {x=x-1;
          t=1;
          }
          else
          {
              x=x+1;
              t=1;
          }
        }
     }
     if(a[j]=='U'||a[j]=='D')
     {
        if(t==2)
        continue;
        else
        {
          if(a[j]=='U')
          {y=y+1;
          t=2;
          }
          else
          {
              y=y-1;
              t=2;
          }
        }
     }
     
     
   }
   cout<<x<<" "<<y<<endl;
   
   
}
    return 0;
}
