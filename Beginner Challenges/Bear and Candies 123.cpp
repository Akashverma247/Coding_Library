/*
 Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

 Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.
 
 */

#include <iostream>
using namespace std;

string winner(int a, int b) {
    int bob = 0, limak = 0, i = 1, j = 1;
    while(a >= i*i) {
        i++;
    }
    while(b >= j*(j+1)) {
        j++;
    }
    if(i <= j)
        return "Bob";
    else
        return "Limak";
}

int main() {
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << winner(a, b) << endl;
    }
    return 0;
}
