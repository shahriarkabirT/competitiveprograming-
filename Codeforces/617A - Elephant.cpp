#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	int count=0;
	 cin>>x;
	
	while(x != 0){
		count++;

		if(x>5){
			x=x-5;
		}
		else{
			x = x-x;
		}
	}
	cout<<count;
}
