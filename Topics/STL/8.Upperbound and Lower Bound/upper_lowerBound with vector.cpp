#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	sort(v.begin() , v.end());

	auto it = upper_bound(v.begin() , v.end(), 4);
	auto it1 = lower_bound(v.begin() , v.end(), 5);
	if(it == v.end()){
		cout<<"Not found"<<endl;
	}
	else{
		cout<<"Uower Bound: "<<*(it)<<endl;
	}
	if(it == v.end()){
		cout<<"Not found"<<endl;
	}
	else{
	cout<<"Lower Bound: "<<*(it)<<endl;
	}
}