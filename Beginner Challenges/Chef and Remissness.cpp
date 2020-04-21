/*
Chef is now a corporate person. He has to attend office regularly. But chef does not want to go to office, rather he wants to stay home and discover different recipes and cook them.

In the office where chef works, has two guards who count how many times a person enters into the office building. Though the duty of a guard is 24 hour in a day, but sometimes they fall asleep during their duty and could not track the entry of a person in the office building. But one better thing is that they never fall asleep at the same time. At least one of them remains awake and counts who enters into the office.

Now boss of Chef wants to calculate how many times Chef has entered into the building. He asked to the guard and they give him two integers A and B, count of first guard and second guard respectively.

Help the boss to count the minimum and maximum number of times Chef could have entered into the office building.
 */

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<max(a, b)<<" "<<(a+b)<<endl;
    }
    return 0;
}
