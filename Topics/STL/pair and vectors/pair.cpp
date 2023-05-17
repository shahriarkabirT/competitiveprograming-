#include<bits/stdc++.h>
using namespace std;

int main(){
	// pair<int, char> g;
	// g = {1, 'a'};

	
	// cin>>g.first;
	// pair<int, char>	&h = g;

	// cout<<g.first<<endl<<h.second;

	pair<int,int> arr[3];

	arr[0] = {1,2};
	arr[1] = {2,3};
	arr[2] = {5,6};

	swap(arr[0],arr[2]);

	for(int i = 0 ; i < 3; i++){
		cout<<arr[i].first <<" "<< arr[i].second<<endl;
	}



}