#include<bits/stdc++.h>
using namespace std;

void solve(){
	int node , edge ;
	cin>>node >> edge;

	vector<int>graph[node+1];

	for(int i = 0 ; i < edge ; i++){

		int v1 , v2;

		cin>>v1>>v2;

		graph[v1].push_back(v2);

		graph[v2].push_back(v1);

	}
	for(int i =  0 ; i < edge ; i++){
		cou t<<i<<" ";
		for(auto it : graph[i]){
			cout<<it<<" ";
		}
		cout<<endl;
	}
}
int main(){
	solve();
}