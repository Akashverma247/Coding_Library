/*
 Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.

 Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !!
 
 */

#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int a[100] = {0}, count = 0;
        for(int j = 0; j < n; j++) {
            cin >> k;
            a[k-1]++;
        }
        for(int j = 0; j < 100; j++) {
            if(a[j] >= 1)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
