/* Chef is very fond of horses. He enjoys watching them race. As expected, he has a stable full of horses. He, along with his friends, goes to his stable during the weekends to watch a few of these horses race. Chef wants his friends to enjoy the race and so he wants the race to be close. This can happen only if the horses are comparable on their skill i.e. the difference in their skills is less.

There are N horses in the stable. The skill of the horse i is represented by an integer S[i]. The Chef needs to pick 2 horses for the race such that the difference in their skills is minimum. This way, he would be able to host a very interesting race. Your task is to help him do this and report the minimum difference that is possible between 2 horses in the race. */
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	int T,N;
	cin >> T;
	while(T--){
	    cin >> N;
	    long int arr[N];
	    long int diff,ans,i;
	    for(i=0;i<N;i++) cin >> arr[i];
	    sort(arr,arr+N);
	    ans = (arr[1]-arr[0]);
	    for(i=0;i<N;i++){
	        diff = (arr[i+1]-arr[i]);
	        if(diff < ans) ans = diff;
	        if(diff==0){
	            ans = 0;
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
