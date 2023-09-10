#include <bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
		int l , r;
		cin>>l>>r;
		for(int i = 2 ; i * i <= r ; i++){
			if(r % i == 0){
				int x , y;
				x = i ;
				y = r - i;
				cout<<x<<" "<<y<<endl;
				return;
			}
		}
		if(r - 1 >= l && r - 1 > 2){
			int x , y;
 
			x = 2;
			y = r - 3;
			cout<<x << " "<<y<<endl;
			return;
		}
		else{
			cout<<-1<<endl;
		}
 
	}
 
int main(){
		int t;
		cin>>t;
		while(t--)	{
			solve();
	}
			
}