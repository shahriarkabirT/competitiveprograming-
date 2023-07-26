#include <bits/stdc++.h>
using namespace std;


void solve(){

	int n,m,k,H;
	cin>>n>>m>>k>>H;

	int h_dif = abs(m*k - k);

	int count = 0;

	for(int i = 0; i < n ; i++){
		int x;
		cin>>x;
		if(((abs(H - x) % k == 0) && abs(H - x) <= h_dif && (H-x)!=0)){
			count++;
		}
	}
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){

		solve();
	}
    
}