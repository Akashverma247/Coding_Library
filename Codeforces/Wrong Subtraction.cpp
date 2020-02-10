/*
 Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

 if the last digit of the number is non-zero, she decreases the number by one;
 if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
 You are given an integer number 𝑛
 n
 . Tanya will subtract one from it 𝑘
 k
  times. Your task is to print the result after all 𝑘
 k
  subtractions.

 It is guaranteed that the result will be positive integer number.
 */

#include <iostream>
using namespace std;
 
int main() {
  int n,k;
  cin>>n>>k;
  for (int j=1;j<=k;j++)
  {
      if(n%10==0)
          n=n/10;
      else
          n--;
  }
  cout<<n<<endl;
return 0;
}
