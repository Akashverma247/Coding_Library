/*



Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons:

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.

Anton has a collection of n polyhedrons. One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int n,t=0;
cin>>n;
string s;
for(int i=1;i<=n;i++)
{
    cin>>s;
    if(s=="Tetrahedron")
    t=t+4;
    else if(s=="Cube")
    t=t+6;
    else if(s=="Octahedron")
    t=t+8;
    else if(s=="Dodecahedron")
    t=t+12;
    else if(s=="Icosahedron")
    t=t+20;
   
}
cout<<t;

return 0;
}
