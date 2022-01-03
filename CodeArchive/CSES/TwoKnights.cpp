#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll calc(ll n){
	return (((n*n)*((n*n)-1))-8-24-(16*(n-4))-16-(24*(n-4))-(8*(n-4)*(n-4)))/2;
}
int main() {
	ll n;
	cin>>n;
	for(ll i = 1;i <= n;i++){
		ll ans = calc(i);
		cout<<ans<<endl;
	}
	return 0;
}