#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int maxi = 1;
	int ans = 1;
	int i = 1;
	while(i < s.size()){
		if(s[i] == s[i-1]){
			maxi++;
			ans = max(ans,maxi);
		} else {
			maxi = 1;
		}
		i++;
	}
	cout<<ans;
	return 0;
}