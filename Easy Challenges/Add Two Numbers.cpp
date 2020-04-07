/*
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

Program is very simple, Given two integers A and B, write a program to add these two numbers.
 
 Constraints
 1 ≤ T ≤ 1000
 1 ≤ A,B ≤ 10000
 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    // Read the number of test cases.
    int T;
    scanf("%d", &T);
    while (T--) {
        // Read the input a, b
        int a, b;
        scanf("%d %d", &a, &b);

        // Compute the ans.
        int ans = a + b;
        printf("%d\n", ans);
    }

    return 0;
}
