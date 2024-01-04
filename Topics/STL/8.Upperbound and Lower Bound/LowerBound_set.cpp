#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;
	set<int>s;
	for(int i = 0 ; i < n ; i++){
		int x;
		cin>>x;
		s.insert(x);
	}

	//never use this becase of O(N) complexity
	//auto it = upper_bound(v.begin() , v.end(), 4);
	//auto it1 = lower_bound(v.begin() , v.end(), 5);

	//instead use this log(N) complexity

	auto it = s.lower_bound(5);

	if(it == s.end()){
		cout<<"Not found"<<endl;
	}
	else{
		cout<<"Lower Bound: "<<*(it)<<endl;
	}
}