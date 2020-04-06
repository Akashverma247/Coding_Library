/*
Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.
 */

#include <iostream>
using namespace std;
 
int main() {
int n, a=0, d=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
if(s.at(i)=='A')
a++;
else
d++;
 
}
if(a>d)
cout<<"Anton";
else if (d>a)
cout<<"Danik";
else
cout<<"Friendship";
    return 0;
}
