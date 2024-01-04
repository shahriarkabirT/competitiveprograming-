#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	int best = 1 ;
	int cur = 1 ;
	int index = 1 ;
	while(index < n ){
		if(abs(v[index]) - abs(v[index-1]) > k){
			best = max(best , cur);
			cur = 1;
		}
		else {
			++cur;
		}
		index++;
	}
	best = max(best , cur);
	cout<<n - best<<endl;
}
signed main(){
	int t;
	cin>>t;
	while(t--)
	solve();
}