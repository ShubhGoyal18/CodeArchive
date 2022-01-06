#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n,x;
	cin>>n>>x;
	vector<ll> children(n,0);
	for(auto &a:children){
		cin>>a;
	}
	// cout<<"input taken"<<endl;
	sort(children.begin(),children.end());
	ll needed = 0;
	ll last = n-1;
	ll start = 0;
	ll left = 0;
	while(start <= last){
		if(start == last){
			needed++;
			start++;
		}else if(children[start] + children[last] <= x){
			needed++;
			start++;
			last--;
		} else {
			left++;
			last--;
		}
	}
	// cout<<"outside the loop"<<endl;
	cout<<(needed+left)<<endl;
	return 0;
}