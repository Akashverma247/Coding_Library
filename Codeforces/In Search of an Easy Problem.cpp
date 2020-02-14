/*


When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked 𝑛
n
 people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these 𝑛
n
 people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int n,f=0;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]==1)
    f=1;
}
if(f==1)
cout<<"HARD";
else
cout<<"EASY";
return 0;
}
