#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	ll ans = 0;
	if(n <= 4){
		ans = 0;
	} else if (n == 5){
		ans = 1;
	} else {
		ll count_five = 1;
		ll start = 10;
		while(start <= n){
			ll i = start;
			while(i%5 == 0 && i>0){
				count_five++;
				i = i/5;
			}
			start = start+5;
		}
		ans= count_five;
	}
	cout<<ans<<endl;
	return 0;
}