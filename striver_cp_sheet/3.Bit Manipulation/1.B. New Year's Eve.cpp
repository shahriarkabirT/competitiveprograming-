#include <bits/stdc++.h>
using namespace std;
void solve(){
	ll n,k ; 
	cin >> n >> k;
	ll m = 1, res;
	if(k == 1){
		res = n;
	}
	else{
		while(m < n){
		m = m * 2 + 1;
		res = m;	
	}
	}
	cout<<res<<endl;

	}

int main() {
		// int t;
		// cin>>t;
		// while(t--){

			solve();
		// }
			
}