#include<bits/stdc++.h>
#define int long long
using namespace std;
int upper_bound(vector<int>&v, int x){
	int lo  = 0 , hi = v.size()-1;
	int mid;
	while(hi-lo > 1){
		mid = (hi+lo)/2;
		if(v[mid] <= x){
			lo = mid + 1;

		}
		else {
			hi = mid;
		}
	}

	if(v[lo] > x){
		return lo;
	}
	else if(v[hi] > x){
		return hi;
	}
	else {
		return -1;
	}
}


signed main(){
	int n;
	cin>>n;
	vector<int>v(n);

	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	int x;
	cin>>x;
	cout<<upper_bound(v,x);

}