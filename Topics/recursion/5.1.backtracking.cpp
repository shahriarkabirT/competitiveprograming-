#include<bits/stdc++.h>
using namespace std;
void f(int n){
	if(n==-1) return;
	f(n-1);

	//backtracking here as it has executed after function calling 
    
	cout<<n << "  " ;
}
int main(){ 
	int n ;    
	cin>>n;
	f(n);
}	