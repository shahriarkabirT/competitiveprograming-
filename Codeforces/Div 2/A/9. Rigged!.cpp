#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int M = 1e9 + 7;


void solve(){
	int n ; cin>>n;
	ll a1[n], a2[n];
	int flag = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>a1[i];
		cin>>a2[i];
 
		if(i>=1){
			if(a1[i]>=a1[0] && a2[i]>=a2[0]){
				flag = 1;
			}
		}
 
	}
	if(flag) cout<<-1<<endl;
	else cout<<a1[0]<<endl;
 
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
 
}