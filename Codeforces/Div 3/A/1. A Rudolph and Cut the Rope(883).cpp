#include<bits/stdc++.h>

using namespace std;


int main(){
	int t ;
	cin>>t;

	while(t--){
		int n ;

		cin>> n;

		int a , b;
		int count = 0;
		for(int i =  0 ; i < n ; i++){
			cin>>a;
			cin>>b;

			if(a>b) count++;
		}

		cout<<count<<endl;

	}

}