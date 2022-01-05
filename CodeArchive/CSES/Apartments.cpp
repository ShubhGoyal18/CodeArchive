#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n,m,k;
	cin>>n>>m>>k;
	vector<ll> users(n,0);
	vector<ll> apart(m,0);
	for(auto &a:users){
		cin>>a;
	}
	for(auto &a:apart){
		cin>>a;
	}
	ll count = 0;
	sort(users.begin(),users.end());
	sort(apart.begin(),apart.end());
	// for(auto a:users){
	// 	cout<<a<<" ";
	// }
	// cout<<endl;
	// for(auto a:apart){
	// 	cout<<a<<" ";
	// }
	// cout<<endl;
	int apart_index = 0,users_index = 0;
	while(apart_index < m && users_index < n){
		if((users[users_index] >= (apart[apart_index] - k)) && (users[users_index] <= (apart[apart_index] + k))){
			count++;
			apart_index++;
			users_index++;
		} else if(users[users_index] < (apart[apart_index] - k)){
			users_index++;
		} else {
			apart_index++;
		}
	}
	cout<<count<<endl;
	return 0;
}