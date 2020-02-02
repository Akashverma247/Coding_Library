/*
 Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories.
 She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not.
 Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not.
 Given her description, your task is to count the number of jewel stones.

 More formally, you're given a string J composed of latin characters where each character is a jewel.
 You're also given a string S composed of latin characters where each character is a mined stone.
 You have to find out how many characters of S are in J as well.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
string j,s,s1="";
cin>>j;
cin>>s;
int total=0;
for(int i=0;i<j.length();i++)
{s1=s1+j.at(i);
    if(count(s1.begin(), s1.end(), j.at(i))==1 )
 {  total=total+ count(s.begin(), s.end(), j.at(i));

     
 }
else
{continue;}

}
cout<<total<<endl;
}


    return 0;
}
