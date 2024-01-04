#include <bits/stdc++.h>
using namespace std;
 
 
void showBinary(int a){
	for(int i =  5; i >= 0 ; --i){
		cout<<((a>>i)&1);
		}
		cout<<endl;
}
bool is_even(int n){
	if(n%2==0) return true;
	else return false;
}
 
 
void solve(){
	
	int n; 
	cin>>n;
	int count=0;
	for(int i= 0 ; i < n ; i++){
		int x;
		cin>>x;
		if(i+1 == x){
			count++;
		}
	}
 
	if(is_even(count)) cout<<count/2<<endl;
	else cout<<(count/2)+1<<endl;
 
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
 
		solve();
	}
    
}