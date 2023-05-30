#include <bits/stdc++.h>
using namespace std;

int main() {
	map < int , multiset<string> > m ;
	int n ;
	cin>>n;

	for(int i = 0 ; i < n ; i ++){
		int x;
		string s;
		cin>>s>>x;
		m[x*(-1)].insert(s);
	}

	for(auto &it : m){
		auto &marks = it.first;
		auto &students = it.second;
		for(auto student : students){
			cout<<student<< " " <<marks*(-1)<<endl;

	}
}
}