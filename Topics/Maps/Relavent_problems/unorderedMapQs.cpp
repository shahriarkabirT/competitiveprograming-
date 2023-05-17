/*given N string and Q queries. In each query you are given a string 
print frequency of that string 
N <=10^6
|s| <= 100
Q <= 10 ^ 6 
*/
 
#include <bits/stdc++.h>
using namespace std;

int main(){

	int q;
	cin>>q;

	while(q--){
		unordered_map <string,int> m ;
		int n;
		cin>>n;

		for(int i = 0 ; i < n ; i++){
			string s;
			cin>>s;
			m[s]++;
		}
		cout<<m.size()<<" "<<endl;
		for(auto t : m){

			cout << t.first << " " << t.second <<endl;
		}
	}
 
}

