#include<bits/stdc++.h>
#define int long long
using namespace std;
void f(int i , int sum){
	if(i<1){
		cout<<sum;
		return;
	} 

	f(i-1, sum+i);
}



signed main(){
	int n;
  	cin>>n; 
	
	f(n,0);

    }

