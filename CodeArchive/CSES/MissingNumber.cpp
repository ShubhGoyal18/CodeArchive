#include<bits/stdc++.h>
using namespace std;
int usingSort(vector<int> arr){
	int n = arr.size()+1;
	sort(arr.begin(),arr.end());
	int start = 0;
	while(start < n){
		if(arr[start] != start+1){
			return start+1;
		}
		start++;
	}
	return n;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n-1,0);
	for(auto &a:arr){
		cin>>a;
	}
	cout<<usingSort(arr);
	return 0;
}