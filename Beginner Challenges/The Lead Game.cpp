/*
 The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

 The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.

 The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.
 */


#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        
    }
  for(i=1;i<n;i++)
  {
      a[i]=a[i]+a[i-1];
      b[i]=b[i]+b[i-1];
  }
  int d[n];
  for(i=0;i<n;i++)
  {
      d[i]=abs(a[i]-b[i]);
  }
  sort(d,d+n);
  int q;
  q=d[n-1];
  for(i=0;i<n;i++)
  {
      if(abs(a[i]-b[i])==q)
      {
          if((a[i]-b[i])==q)
          {
              cout<<1<<" "<<q;
              
          }
          else{
              cout<<2<<" "<<q;
              
              
              
          }
      }
  }
  return 0;
}
