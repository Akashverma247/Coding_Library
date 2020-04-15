/*
Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.
 */


#include <iostream>
using namespace std;

int main() {
    
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        //int arr[3]={a,b,c}
        
        if((a>b&&b>c)||(a<b&&b<c))
        cout<<b;
        if((b>a&&a>c)||(b<a&&a<c))
        cout<<a;
        if((c>a&&c<b)||(c<a&&c>b))
        cout<<c;
        cout<<endl;
        
    }
    
    return 0;
}
