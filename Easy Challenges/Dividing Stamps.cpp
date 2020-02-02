/*
 re you fond of collecting some kind of stuff? Mike is crazy about collecting stamps. He is an active member of Stamp Collecting Сommunity(SCC).

 SCC consists of N members which are fond of philately. A few days ago Mike argued with the others from SCC. Mike told them that all stamps of the members could be divided in such a way that i'th member would get i postage stamps. Now Mike wants to know if he was right. The next SCC meeting is tomorrow. Mike still has no answer.

 So, help Mike! There are N members in the SCC, i'th member has Ci stamps in his collection. Your task is to determine if it is possible to redistribute C1 + C2 + ... + Cn stamps among the members of SCC thus that i'th member would get i stamps.


 */

#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
long int a[n];
long int s=0,p=0;
for(int i=0;i<n;i++)
{
    p=p+i;
    cin>>a[i];
    s=s+a[i];
}
p=p+n;

if(p==s)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    return 0;
}
