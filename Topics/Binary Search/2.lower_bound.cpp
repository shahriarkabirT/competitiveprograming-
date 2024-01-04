#include<bits/stdc++.h>
#define int long long
using namespace std;

int lower_bound(vector<int> &arr , int element){
	int lo = 0 , hi = arr.size()-1;
	int mid ;
	while(hi - lo > 1){
		mid = (hi+lo)/2;
		if(arr[mid] < element){
			lo = mid + 1;
		}
		else{
			hi = mid; 
		}
	}
	if(arr[lo] >= element) return lo;
	else if(arr[hi] >= element) return hi;
	else return -1;
}

signed main(){
	int n ; 
	cin>>n;
	vector<int>v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	int element;
	cin>>element;

	cout<<lower_bound(v,element)<<endl;


}