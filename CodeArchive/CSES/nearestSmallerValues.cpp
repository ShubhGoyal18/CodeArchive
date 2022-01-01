#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> arr(n);
	for(auto &a:arr){
		cin>>a;
	}
	stack<int> s;

	vector<int> ans(n,0);
	for(int i =0;i<n;i++){
		if(s.size() == 0){
			s.push(i);
		} else {
			while(s.size() !=0 && arr[s.top()] >= arr[i]){
				s.pop();
			}
			if(s.size() != 0){
				ans[i] = s.top()+1;
			}
			s.push(i);
		}
	}
	for(auto a:ans){
		cout<<a<<" ";
	}
	cout<<endl;
	return 0;
}