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
		m[x].insert(s);
	}

	auto cur_it = --m.end();

	while(true){

		auto &marks = (*cur_it).first;
		auto &sutdents = (*cur_it).second;

		for(auto student : sutdents){
			cout<<student << " " << marks<<endl;
		}
		if(cur_it== m.begin()){
			break;
		}
		cur_it --;
	}   
}