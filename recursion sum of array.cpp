
#include<bits/stdc++.h>
using namespace std;

int sum(int n, int a[]){
	if(n<0){
		return 0;
	}
	else{

	return a[n] + sum(n-1,a);
 
	}

}
int main(){
int n;
cin>>n;

int arr[n];
for(int i = 0 ; i < n ; i++ ){
	cin>>arr[i];
	cout<<arr[i]<<" ";
}

cout<<endl<<sum(3,arr);

}



