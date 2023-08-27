#include <bits/stdc++.h>
using namespace std;
void printDivisors(int a){
	for(int i = 1 ; i * i <= a ; i++){
		if(a%i==0){
			cout<< i << " " << a/i <<endl;
		}
	}
}
int main(){
		int t;
		cin>>t;
		while(t--){
			printDivisors(36);
		}
			
}