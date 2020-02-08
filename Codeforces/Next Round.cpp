/*
 "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

 A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.
 */

#include <iostream>
using namespace std;
 
int main() {
  int n,k;
  cin>>n>>k;
  int a[n];
 
  for(int i=0;i<n;i++)
      cin>>a[i];
  int s=a[k-1];
  int c=0;
  for(int i=0;i<n;i++)
  {
   if(a[i]>=s&&a[i]>0)
       c++;
  }
  cout<<c<<endl;
return 0;
}
