/*


Dr. Bruce Banner hates his enemies (like others don't). As we all know, he can barely talk when he turns into the incredible Hulk. That's why he asked you to help him to express his feelings.

Hulk likes the Inception so much, and like that his feelings are complicated. They have n layers. The first layer is hate, second one is love, third one is hate and so on...

For example if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it", and if n = 3 it's "I hate that I love that I hate it" and so on.

Please help Dr. Banner.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
for(int i=1;i<n;i++)
{
    if(i%2==0)
    cout<<"I love that ";
    else
    cout<<"I hate that ";

}
if(n%2==0)
cout<<"I love it ";
else
 cout<<"I hate it ";
return 0;
}
