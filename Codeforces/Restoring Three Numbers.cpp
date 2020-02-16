/*

 Polycarp has guessed three positive integers a,b and c. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: a+b,a+c,b+c and a+b+c.
 You have to guess three numbers a,b adn c using given numbers. Print three guessed integers in any order.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
long a[4];
for(int i=0;i<4;i++)
cin>>a[i];
sort(a,a+4);
cout<<a[3]-a[0]<<" ";
cout<<a[3]-a[1]<<" ";
cout<<a[3]-a[2];
return 0;
} 
