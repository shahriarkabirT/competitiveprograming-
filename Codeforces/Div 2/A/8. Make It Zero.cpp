#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
		int n;
		cin>>n;
		int ans = 0;
		int flag = 0;
		for(int i = 0 ; i < n ; i++){
			int x;
			cin>>x;
			ans ^= x;
			if(x != 0) flag = 1;
		}

		if(ans == 0 && flag == 1){
			cout<<1<<endl;
			cout<<1 <<" "<<n<<endl;
		}
		else if(ans == 0 && flag == 0){
			cout<<0<<endl;
		}	
		else{
			if(n%2==0){
				cout<<2<<endl;
				cout<<1<<" "<<n<<endl;
				cout<<1<<" "<<n<<endl;
			}
			else{
				cout<<4<<endl;
				cout<<1 << " "<<n<<endl;
				cout<<1 << " "<<n-1<<endl;
				cout<<n-1 << " "<<n<<endl;
				cout<<n-1 << " "<<n<<endl;

			}
		}
}	

int main(){		
		int t;
		cin>>t;
		while(t--){
			solve();
	}		
}