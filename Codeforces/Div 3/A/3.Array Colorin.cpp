#include <bits/stdc++.h>
using namespace std;

bool is_even(int n){
	if(n&1==1) return false;
	else return true;
}
void solve(){
	int n ; 
	cin >> n;
	vector<int> v(n);
	int evencount = 0 , oddcount = 0;
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];

		if(is_even(v[i])) evencount++;
		else oddcount++;

	}

	if(is_even(oddcount)) cout<<"YES"<<endl;
	else if(is_even(oddcount) == false) cout<<"NO"<<endl;


	}

int main() {
		int t;
		cin>>t;
		while(t--){

			solve();
		}
			
}