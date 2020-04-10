/*
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t,input;
    vector<int> v;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++){
        cout<<v[i]<<"\n";
    }
    return 0;
}
