/*
Snackdown 2019 is coming! There are two rounds (round A and round B) after the qualification round. From both of them, teams can qualify to the pre-elimination round. According to the rules, in each of these two rounds, teams are sorted in descending order by their score and each team with a score greater or equal to the score of the team at the K=1500-th place advances to the pre-elimination round (this means it is possible to have more than K
 qualified teams from each round in the case of one or more ties after the K-th place).

Today, the organizers ask you to count the number of teams which would qualify for the pre-elimination round from round A for a given value of K(possibly different from 1500). They provided the scores of all teams to you; you should ensure that all teams scoring at least as many points as the K-th team qualify.
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {
     int n,k,count=0;
     cin>>n>>k;
   int a[n];
   for(int i=0;i<n;cin>>a[i],i++);
   sort(a,a+n,greater<int>());
   for(int i=0;i<n;i++)
   {
       if(a[i]>=a[k-1])count++;
   }
cout<<count<<endl;

}
}
