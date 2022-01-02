#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int test;
	cin>>test;
	while(test--){
		long long int x;
		long long int y;
		cin>>x>>y;
		bool is_row_big = false;
		if(x >= y){
			is_row_big = true;
		}
		bool is_big_even = false;
		if(max(x,y)%2 == 0){
			is_big_even = true;
		}
		
		if(is_row_big && is_big_even){
			cout<<(x*x - y +1)<<endl;
		} else if(is_row_big && !is_big_even){
			cout<<((x-1)*(x-1) + y)<<endl;
		} else if(!is_row_big && !is_big_even){
			cout<<(y*y -x+1)<<endl;
		} else {
			cout<<((y-1)*(y-1)+x)<<endl;
		}
	}

	return 0;
}
// 8
// 1
// 15