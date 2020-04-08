/*
You're given an integer N. Write a program to calculate the sum of all the digits of N.
 */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, i = 0, sum=0;
        cin >> n;
        int arr[n];
        while(n!=0){
            arr[i] = n % 10;
            n /= 10;
            i++;
        }
        for(int j = 0; j < i; j++){
            sum += arr[j];
        }
        cout << sum << endl;
    }
    return 0;
}
