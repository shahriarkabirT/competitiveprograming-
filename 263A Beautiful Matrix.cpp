#include<bits/stdc++.h>
using namespace std;
int main(){

	int arr[25][25];
	int x,y;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5;j++){
			cin>>arr[i][j];
			if(arr[i][j]==1){
					 x = i;
					 y = j;
					}
		}
	}

	cout<<abs(3-x)+abs(3-y);


}
