#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr(n);
    for(int i = 0;i<n;i++){
        int val;cin>>val;
        arr[i].first = val;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());

    vector<int> ans;

    for(int i = 0;i<n-2;i++){
        int j = i+1;
        int k = n-1;
        while(j < k){
            int sum  = arr[i].first + arr[j].first + arr[k].first;
            if(sum == x){
                ans.push_back(arr[i].second+1);
                ans.push_back(arr[j].second+1);
                ans.push_back(arr[k].second+1);
                break;
            } else if(sum < x){
                j++;
            } else {
                k--;
            }
        }
        if(ans.size() != 0){
            break;
        }
    }

    if(ans.size() == 0){
        cout<<"IMPOSSIBLE";
    } else {
        for(auto a:ans){
            cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0;
}