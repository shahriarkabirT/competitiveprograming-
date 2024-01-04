#include <bits/stdc++.h>
using namespace std;
vector <int> NGE(vector <int> v){
	vector<int> nge(v.size());

	stack<int>st;

	for(int i = 0 ; i < v.size(); i++){
		while(!st.empty() && v[i]>v[st.top()]){
			nge[st.top()] = i ;
			st.pop();
		}
		st.push(i);
	}

	while(!st.empty()){
		nge[st.top()]= -1;
		st.pop();
	}
	return nge;
}


int main(){
	int n; 
	cin>>n;
	vector <int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}


	vector <int> nge = NGE(v);
	for(int i = 0 ; i < n ; i++){
		if(nge[i]>0)
		cout<<v[i] << " " <<v[nge[i]]<<endl;
		else cout<<v[i] << " " <<nge[i]<<endl;
	}
}
