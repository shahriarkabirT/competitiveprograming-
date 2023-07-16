#include<bits/stdc++.h>
#define int long long
using namespace std;

double esp = 1e-7;

signed main(){
	double n;
	cin>>n;

	double lo = 0 , hi = n-1;
	double mid;
	while(hi-lo > esp){
		mid = (hi + lo)/2;
		if(mid * mid > n){
			hi = mid;
		}
		else{
			lo = mid;
		}

	}	
	cout<<mid;

}