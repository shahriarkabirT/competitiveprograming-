#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	int t;
	cin>>t;
 
	while(t--){
		int n;
		cin>>n;
		int a,b;
		int max1 = 0 , max2 = 0;
 
		
 
		int result;
		for(int i = 0 ; i < n ; i++){
			cin>>a;
			cin>>b;
			
			if(a<=10){
				if(b>max1) result = i+1,  max1 = b, max2 = max1 ;
				else max2 = b;
			}
		}
		cout<<result<<endl;
	}
}