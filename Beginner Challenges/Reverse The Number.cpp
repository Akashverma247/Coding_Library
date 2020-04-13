/*
 If an Integer N, write a program to reverse the given number.
 */


#include <iostream>
using namespace std;

int main()
{
    int tnums;
    cin>>tnums;
    long int num;
    
    while(tnums--)
    {
        cin>>num;
        long int reverse=0;
        int rem;
        while(num!=0)
        {
            rem=num%10;
            reverse=reverse*10+rem;
            num=num/10;
        }
        cout<<reverse<<endl;
        
    }
    
    return 0;
}
