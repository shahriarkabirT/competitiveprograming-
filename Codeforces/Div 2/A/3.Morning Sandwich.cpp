#include <bits/stdc++.h>
using namespace std;
void solve(){
	int b,c,h;
	cin>>b>>c>>h;

	int ans ; 
	if(b <= c+h){
		ans = b * 2 - 1;
	}
	else{
		ans = ((c+h)*2) + 1;
	}
	cout<<ans<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){

		solve();
	}
    
}