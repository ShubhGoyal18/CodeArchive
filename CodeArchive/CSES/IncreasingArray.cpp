#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int ans = 0;
	long long int prev;
	cin>>prev;
	long long int i = 1;
	long long int asi = 0;
	while(i < n){
		long long int val;
		cin>>val;
		ans = ans + max(asi,(prev-val));
		prev = max(prev,val);
		i++;
	}
	cout<<ans;
	return 0;
}