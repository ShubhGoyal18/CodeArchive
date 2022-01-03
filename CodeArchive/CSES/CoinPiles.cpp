#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll test;
	cin>>test;
	while(test--){
		ll a,b;
		cin>>a>>b;
		if(a<b){
			if(2*a >= b){
				a = a%3;
				b = b%3;
				if((a ==1 && b==2) || (a==2 && b==1) || (a==0 && b==0)){
					cout<<"YES"<<endl;
				} else {
					cout<<"NO"<<endl;
				}
			} else {
				cout<<"NO"<<endl;
			}
		} else {
			if(2*b >= a){
				a = a%3;
				b = b%3;
				if((a ==1 && b==2) || (a==2 && b==1) || (a==0 && b==0)){
					cout<<"YES"<<endl;
				} else {
					cout<<"NO"<<endl;
				}
			} else {
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}