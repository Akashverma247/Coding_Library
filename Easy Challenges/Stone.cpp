/*
 Roman has no idea, why this problem is called Stone. He also has no idea on how to solve the followong problem: given array of N integers A and a number K. During a turn the maximal value over all Ai is chosen, let's call it MAX. Then Ai = MAX - Ai is done for every 1 <= i <= N. Help Roman to find out how will the array look like after K turns.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    long n,k;
    cin>>n>>k;
    long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m = *max_element(a,a+n);
    if(k==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else if(k%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<m-a[i]<<" ";
        }
    }
    else
    {
        int min=*min_element(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]-min<<" ";
        }
    }
    cout<<endl;
    return 0;
}
