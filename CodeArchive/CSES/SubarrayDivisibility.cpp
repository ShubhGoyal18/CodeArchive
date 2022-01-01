#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	vector<ll> arr(n);
	for(auto &a:arr){
		cin>>a;
	}
	map<ll,ll> m;
	ll sum = 0;
	ll ans = 0;
	for(ll i = 0;i<n;i++){
		sum = sum + arr[i];
		if((((sum%n)+n)%n) == 0){
			ans++;
		}
		if(m.find(((sum%n)+n)%n) != m.end()){
			ans = ans + m[(((sum%n)+n)%n)];
		}
		m[(((sum%n)+n)%n)]++;
	}
	cout<<ans;
	return 0;
}