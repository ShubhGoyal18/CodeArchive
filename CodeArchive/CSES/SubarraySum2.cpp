#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int n,x;
	cin>>n>>x;
	vector<long long int> arr(n);
	for(auto &a:arr){
		cin>>a;
	}

	long long int count = 0;
	long long int sum = 0;
	map<long long int,long long int> m;
	for(long long int i = 0;i<n;i++){
		sum = sum + arr[i];
		
		if(sum == x){
			count++;
		}

		if(m.find(sum - x) != m.end()){
			count = count + m[sum - x];
		}
		m[sum]++;
	}
	cout<<count<<endl;
	return 0;
}