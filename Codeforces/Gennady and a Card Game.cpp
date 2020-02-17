/*
 Gennady owns a small hotel in the countryside where he lives a peaceful life. He loves to take long walks, watch sunsets and play cards with tourists staying in his hotel. His favorite game is called "Mau-Mau".

 To play Mau-Mau, you need a pack of 52
 52
  cards. Each card has a suit (Diamonds — D, Clubs — C, Spades — S, or Hearts — H), and a rank (2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, or A).

 At the start of the game, there is one card on the table and you have five cards in your hand. You can play a card from your hand if and only if it has the same rank or the same suit as the card on the table.

 In order to check if you'd be a good playing partner, Gennady has prepared a task for you. Given the card on the table and five cards in your hand, check if you can play at least one card.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
string s;
cin>>s;
string a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
if(s.at(1)==a.at(1)||s.at(1)==b.at(1)||s.at(1)==c.at(1)||s.at(1)==d.at(1)||s.at(1)==e.at(1)||s.at(0)==a.at(0)||s.at(0)==b.at(0)||s.at(0)==c.at(0)||s.at(0)==d.at(0)||s.at(0)==e.at(0))
cout<<"YES";
else
cout<<"NO";
return 0;
} 
