#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n,m;
	cin>>n>>m;
	set<vector<int>> s;
	for(int i = 0; i<n; i++){
		int val;
		cin>>val;
		s.insert({val,i});
	}
	for(int i = 0;i<m;i++){
		int t;
		cin>>t;
		auto it = s.lower_bound({t+1,0});
		if(it == s.begin()){
			cout<<-1<<endl;
		} else {
			it--;
			cout<<(*it)[0]<<endl;
			s.erase(it);
		}
	}
	return 0;
}