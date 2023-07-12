#include<bits/stdc++.h>
#define int long long
using namespace std;
void f(int i[] ,int l, int r){
	if(l>=r) return ;

	swap(i[l],i[r]);
	

	f(i,l+1,r-1);
}



signed main(){
	int n;
	cin>>n;
	int a[n];
  	for(int i = 0 ; i < n ; i++) cin>>a[i];
	
	f(a,0,n-1);

	for(int i = 0 ; i < n ; i++) cout<<a[i]<<" ";

    }

