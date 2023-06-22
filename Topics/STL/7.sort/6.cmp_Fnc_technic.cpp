#include <bits/stdc++.h>
using namespace std;
 bool cmp(pair<int,int>a, pair<int,int> b){
	if(a.first != b.first) {
		return a.first < b.first;
	}
	return a.second < b.second;
 }

 bool cmparr(int a , int b){
 	return a<b;
 }

int main(){
	int n;
	cin>>n;
	//array with pair
	vector<pair<int,int>>v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i].first>>v[i].second;
	}
	int arr[n];
	//array

	for(int i = 0; i < n ; i++){
		cin>>arr[i];
	}
	sort(arr, arr + n, cmparr);
	sort(v.begin(),v.end(), cmp);

	for(int i = 0 ; i < n ; i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;

	}
	cout<<endl<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";

	}

}
