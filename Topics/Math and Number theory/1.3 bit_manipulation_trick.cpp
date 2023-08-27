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

	char ch;
	cin>>ch;

	char ch2;
	cin>>ch2;

	showBinary(a);
//checking even odd
	if(a&1==1)cout<<"ODD"<<endl;
	else cout<<"Even"<<endl;
	cout<<endl<<endl;
//multiply
	cout<<(a<<i)<<endl;  // a * 2^i
//multiply by 2
	cout<<(a<<1)<<endl;
//deviding by 2
	cout<<(a>>1)<<endl;
//make lowercase 
	cout<<(char)(ch | 1<<5)<<endl;
	cout<<(char)(ch |' ')<<endl;
//make Uppercase
	cout<<(char)(ch2 & ~(1<<5))<<endl;
	cout<<(char)(ch2 & '_')<<endl;
//make clear lsb
	int j = 1;
	showBinary(a& (~((1 << j+1)-1 )));
//make clear msb
	showBinary(a& (((1 << j+1)-1 )));

//power of 2 or no
	if(a & (a-1)) cout<<"Not power of two"<<endl;
	else cout<<"Power of 2"<<endl;
}