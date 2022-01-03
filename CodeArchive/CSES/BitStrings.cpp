#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	ll mod = 1000000007;
	ll ans = 2;
	for(ll i = 1; i < n;i++){
		ans = (ans * 2)%mod;
	}
	cout<<ans<<endl;
	return 0;
}