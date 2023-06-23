#include<bits/stdc++.h>
using namespace std;
void f(int n){
	vector<int>v;
	string s = to_string(n);
	int size = s.size();
	int mod = 10;

	for(int i = size ; i > 0 ; i--){

			int rem = n%mod;

			if(rem!=0) v.push_back(rem);
			
			n = n - rem;
			mod*=10;
	}
	cout<<v.size()<<endl;
	for(auto i : v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){ 
	int t;
	cin>>t;
	while(t--){
		int n ; 
		cin>>n;
		f(n);
	}
	
}	