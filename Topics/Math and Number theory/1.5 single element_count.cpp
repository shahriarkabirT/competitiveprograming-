#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	int result = 0;
	for(int i = 0 ; i < n ; i++){
		
		cin>>x;
		result ^= x;
	}
	cout<<result;
}