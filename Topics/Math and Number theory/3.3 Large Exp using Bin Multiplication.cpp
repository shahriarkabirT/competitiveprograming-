#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const long long M2 = 1e18 + 7;

long long binMultiply(long long a , long long b){
	long long ans = 0;
	while(b > 0){
		if(b&1) ans = (ans + a) % M2;
		a = (a + a) % M2;
		b>>=1;
	}
	return ans;
}
long long binExpLrg(long long a , long long b){
	long long ans = 1;
		while(b > 0){
			if(b&1) ans = binMultiply(ans , a);

			a = binMultiply ( a , a);

			b = b >> 1;
		}
	return ans;
}

void solve(){

	cout<<binExpLrg( 1000 , 17 );

	}

int main() {
		
			solve();
			
}