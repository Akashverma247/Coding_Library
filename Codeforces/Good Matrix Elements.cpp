/*

The Smart Beaver from ABBYY got hooked on square matrices. Now he is busy studying an n × n size matrix, where n is odd. The Smart Beaver considers the following matrix elements good:

Elements of the main diagonal.
Elements of the secondary diagonal.
 Elements of the "middle" row — the row which has exactly (n-1)/2 rows above it and the same number of rows below it.
 Elements of the "middle" column — the column that has exactly (n-1)/2 columns to the left of it and the same number of columns to the right of it.
 Help the Smart Beaver count the sum of good elements of the given matrix.
 
 */

#include <iostream>
using namespace std;
 
int main() {
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    cin>>a[i][j];
}
int s=0;
int d=(n-1)/2;
for(int i=0;i<n;i++)
{
    s=s+a[i][i];
    s=s+a[i][d];
    s=s+a[d][i];
    s=s+a[i][n-1-i];
    
}
s=s-(3*a[d][d]);
cout<<s;
 
 
    return 0;
}
