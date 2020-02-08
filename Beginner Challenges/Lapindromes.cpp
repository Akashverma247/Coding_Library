/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.*/
#include <iostream>
#include <cstring>
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
    int t=0;
    
cin>>t;
for(int i=1;i<=t;i++)
{
   string s="";
   cin>>s;
   int l=s.length();
   string s1="", s2="";
   if(l%2==0)
   { 
       s1=s.substr(0,l/2);
       s2=s.substr(l/2,l);
   }else
  { 
      s1=s.substr(0,(l/2));
    s2=s.substr((l/2)+1,l);
  }
 
  
  for(int j=0;j<s1.length();j++)
  {
      if(count(s1.begin(),s1.end(),s1.at(j))==count(s2.begin(),s2.end(),s1.at(j)))
      continue;
      else
      {
          l=0;break;
      }
  }
  if(l==0)
  cout<<"NO"<<endl;
  else
  cout<<"YES"<<endl;
}
return 0;
  
}

