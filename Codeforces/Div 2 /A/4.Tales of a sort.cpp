#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	vector<int>v(n);

	int flag = 0;
	int res = 0; 
	for(int i =  0 ; i < n ; i++){
		cin>>v[i];
	
		if(v[i]>=flag) flag = v[i];
		else res = flag;

	}
	
	cout<<res<<endl;
	



	}
int main() {
		int t; 
		cin>>t;
		while(t--){
			solve();
		}
			
}