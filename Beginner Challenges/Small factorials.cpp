/*
You are asked to calculate factorials of some small positive integers.


 */

#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cpp_int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cpp_int fac = 1;
        if(n == 0 || n == 1)
            cout<<fac<<endl;
        else{
            for(cpp_int i = 2; i<=n; i++)
               fac = fac*i;
            cout<<fac<<endl;
        }
    }
    return 0;
}
