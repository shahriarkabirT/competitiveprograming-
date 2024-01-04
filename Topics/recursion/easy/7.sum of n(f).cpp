#include<bits/stdc++.h>
#define int long long
using namespace std;
int f(int i){
	if(i == 0) return 0;

	return i + f(i-1);
}



signed main(){
	int n;
  	cin>>n; 
	
	cout<<f(n);

    }

