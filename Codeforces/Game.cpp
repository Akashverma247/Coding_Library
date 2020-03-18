/*
Two players play a game.
 Initially there are 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 written on the board. Each turn a player selects one number and erases it from the board. This continues until there is only one number left on the board, i. e. 𝑛−1 turns are made. The first player makes the first move, then players alternate turns.

 The first player wants to minimize the last number that would be left on the board, while the second player wants to maximize it.
 You want to know what number will be left on the board after 𝑛−1 turns if both players make optimal moves.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a, a+n, greater<int>());
if(n%2==0)
cout<<a[n/2];
else
cout<<a[(n-1)/2];
    return 0;
}
