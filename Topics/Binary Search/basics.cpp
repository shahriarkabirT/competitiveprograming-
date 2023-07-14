#include<bits/stdc++.h>
//#define int long long
using namespace std;

signed main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++) cin>>arr[i];
	int to_find;
	cin>>to_find;

	int lo = 0 , hi = n - 1;
	int mid;
	while(hi - lo > 1){
		 mid = (lo + hi)/2;

		if(arr[mid] < to_find){

			lo = mid + 1;
		}
		else{

			hi = mid;
		}
	}

	if(to_find == lo) cout<<lo;
	else cout<<hi;
}
