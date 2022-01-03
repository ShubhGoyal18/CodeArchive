#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin>>n;
	ll ans = (n%4);
	if(ans == 1 || ans ==2){
		cout<<"NO"<<endl;
	} else {
		vector<ll> first;
		ll first_sum = 0;
		vector<ll> second;
		ll second_sum = 0;
		ll sum_to_be = 0;
		if(ans == 0){
			sum_to_be = (n/4)*(n+1);
		} else {
			sum_to_be = ((n+1)/4)*n;		
		}
		for(ll i = n;i>0;i--){
			if((sum_to_be-first_sum) >= i){
				first_sum += i;
				first.push_back(i); 
			} else {
				second_sum += i;
				second.push_back(i);
			}
		}
		cout<<"YES"<<endl<<first.size()<<endl;
		for(auto a:first){
			cout<<a<<" ";
		}
		cout<<endl<<second.size()<<endl;
		for(auto b:second){
			cout<<b<<" ";
		}
		cout<<endl;
	}
	return 0;
}