/*
 Tonight, Chef would like to hold a party for his N friends.

 All friends are invited and they arrive at the party one by one in an arbitrary order. However, they have certain conditions — for each valid i, when the i-th friend arrives at the party and sees that at that point, strictly less than Ai other people (excluding Chef) have joined the party, this friend leaves the party; otherwise, this friend joins the party.

 Help Chef estimate how successful the party can be — find the maximum number of his friends who could join the party (for an optimal choice of the order of arrivals).
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
        cin>>a[j];
    sort(a, a+n);
    int c=0;
    for(int  j=0;j<n;j++)
    {
        if(a[j]<=c)
            c++;
    }
    cout<<c<<endl;
}
    return 0;
}

