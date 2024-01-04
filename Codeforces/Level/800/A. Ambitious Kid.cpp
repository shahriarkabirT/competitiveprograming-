#include <iostream>
using namespace std;
void solve(int t){
	int min = INT_MAX;
	for(int i = 0 ; i < t; i++){
		int a;
		cin>>a;
		if(abs(a)<=min){
			min = abs(a);
		}
	}
	cout<<min;
 
}
 
 
int main(){
		int t;
		cin>>t;
		solve(t);
			
}