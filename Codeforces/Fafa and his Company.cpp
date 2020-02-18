/*
 Fafa owns a company that works on huge projects. There are n employees in Fafa's company. Whenever the company has a new project to start working on, Fafa has to divide the tasks of this project among all the employees.

 Fafa finds doing this every time is very tiring for him. So, he decided to choose the best l employees in his company as team leaders. Whenever there is a new project, Fafa will divide the tasks among only the team leaders and each team leader will be responsible of some positive number of employees to give them the tasks. To make this process fair for the team leaders, each one of them should be responsible for the same number of employees. Moreover, every employee, who is not a team leader, has to be under the responsibility of exactly one team leader, and no team leader is responsible for another team leader.

 Given the number of employees n, find in how many ways Fafa could choose the number of team leaders l in such a way that it is possible to divide employees between them evenly.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
long n;
cin>>n;
long d=n/2;
int c=0;
for(int i=1;i<=d;i++)
if(n%i==0)
c++;
cout<<c;
return 0;
} 
