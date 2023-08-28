#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 ;

vector<int> divisors[N];

int main(){
	for(int i = 2 ; i < N ; i++){
			for(int j = i ; j < N ; j += i){
				divisors[j].push_back(i);
			}
		}

		for(int i = 1 ; i < 10 ; i++){
			for(auto it : divisors[i]){
				cout<<it<<" ";
			}
				cout<<endl;
		}
		
	}


