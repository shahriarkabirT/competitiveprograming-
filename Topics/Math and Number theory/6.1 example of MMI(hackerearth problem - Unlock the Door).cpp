#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int M = 1e9 + 7;
const long long M2 = 1e18 + 7;
const int N = 1e5 ;
int fact[N];

long long EularbinExp(int  a , int b , int m){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a) % m;

			a = (a * 1LL * a) % m;

			b = b >> 1;
		}
	return ans;
}

void solve(){
		int n, k;
		cin>>n>>k;
		int ans = fact[n];

		ans = (ans * 1LL * fact[k]) % M;

		int deno = (fact[k-n] * 1LL * fact[n])%M;

		ans =( EularbinExp(deno , M-2 , M) * ans)%M;
		cout<<ans<<endl;


}	

int main(){
		fact[0] = 1;
		for(int i = 1 ; i <= N ; i++){
		fact[i] =( fact[i-1] * 1LL * i) % M;
		}
		
		int t;
		cin>>t;
		while(t--){
			solve();
	}		
}