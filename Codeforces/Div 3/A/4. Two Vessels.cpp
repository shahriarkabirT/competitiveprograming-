#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve(){
		int a , b , c ;
 
		cin>>a>>b>>c;
		int count = 0; 
		if ( a == b ){
			cout<<0<<endl;
		} 
		else if(a > b ){
			while(a > b){
				a = a - c;
				b = b + c;
				count++;
            }		
				cout<<count<<endl;
		}
 
		else{
			while(b > a){
				a = a + c;
				b = b - c;
				count++;
			}
		
				cout<<count<<endl;
			
		}
	}
int main(){
		int t;
		cin>>t;
		while(t--)	solve();
	
			
}