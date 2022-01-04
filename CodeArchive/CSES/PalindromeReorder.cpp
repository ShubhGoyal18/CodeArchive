#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	unordered_map<char,int> m;
	for(int i = 0;i<s.size();i++){
		m[s[i]]++;
	}
	vector<char> odd;
	for(auto a:m){
		if(a.second%2 == 1){
			odd.push_back(a.first);
		}
	}
	if(odd.size() >= 2){
		cout<<"NO SOLUTION"<<endl;
	} else {
		string fir = "";
		string sec = "";
		for(auto a:m){
			if(odd.size() == 1){
				if(odd[0] != a.first){
					for(int j = 0;j<a.second; j=j+2){
						fir.push_back(a.first);
						sec.push_back(a.first);
					}
				}
			} else {
				for(int j = 0;j<a.second; j=j+2){
						fir.push_back(a.first);
						sec.push_back(a.first);
				}
			}
		}
		if(odd.size() == 1){
			for(int j = 0;j<m[odd[0]];j++){
				fir.push_back(odd[0]);
			}
		}
		reverse(sec.begin(),sec.end());
		string ans = fir + sec;
		cout<<ans<<endl;
	}
	return 0;
}