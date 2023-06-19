#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
		
	sort(arr , arr+n);
	sort(v.begin(), v.end());

	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<v[i]<<" ";
	}
}