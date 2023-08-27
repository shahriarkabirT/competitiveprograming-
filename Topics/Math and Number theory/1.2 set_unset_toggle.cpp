#include<bits/stdc++.h>
using namespace std;

void showBinary(int a){
	for(int i =  5; i >= 0 ; --i){
		cout<<((a>>i)&1);
		}
		cout<<endl;
}

int main(){
	int a;
	cin>>a;
	int i;
	cin>>i;
	showBinary(a);
	if(a&(1<<i)!=0) cout<<"unset bit"<<endl;
	else cout<<"set bit"<<endl;

	//bit set
	showBinary(a | (1 << 3));

	//bit unset
	showBinary(a & (~(1 << 2)));

	//bit toggle
	showBinary( a ^ (1 << 1));
	
	//count set bit
	cout<<__builtin_popcount(a)<<endl;
	cout<<__builtin_popcountll(a)<<endl;
}