#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	sort(a , a+n);

	int *ptr = upper_bound(a, a+n , 2);
	int *ptr1 = lower_bound(a, a+n , 2);
	if(ptr == a+n){
		cout<<"Not found"<<endl;
		
	}
	else{
		cout<<"Upper Bound: "<<*(ptr)<<endl;
	}
	if(ptr1 == a+n){
		cout<<"Not found"<<endl;
	}
	else{

	cout<<"Lower Bound: "<<*(ptr1)<<endl;
	}
	
}
