#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for(auto &a:arr){
		cin>>a;
	}

	int count = 0;
	int sum = 0;
	int curr = 0,prev = 0;
	while(curr <= n){
		if(sum < x){
			sum = sum + arr[curr];
			curr++;
		} else if(sum > x){
			while(sum > x && prev < curr){
				sum = sum - arr[prev];
				prev++;
			}
		} else {
			// cout<<prev <<"  "<<curr<<endl;
			count++;
			sum = sum - arr[prev];
			prev++;
		}
	}
	// cout<<sum<<endl;
	cout<<count<<endl;
	return 0;
}