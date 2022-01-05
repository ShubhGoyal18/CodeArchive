#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;
	cin>>n;
	set<ll> s;
	for(ll i=0;i<n;i++){
		ll val;
		cin>>val;
		s.insert(val);
	}
	cout<<s.size();
	return 0;
}