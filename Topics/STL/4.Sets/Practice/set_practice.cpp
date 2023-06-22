//https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY

#include <bits/stdc++.h>
using namespace std;
int main(){
	int q; 
	cin>>q;
	set<int>s;
	
	while(q--){
		int y;
		long int x ;
		
		cin >> y >> x;

		if(y == 1){
			s.insert(x);
		}
		else if(y == 2){
			s.erase(x);
		}
		else{
			auto it = s.find(x);
			if(it != s.end()){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
		}

	}
	}

