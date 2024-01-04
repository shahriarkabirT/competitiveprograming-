/*given N string, print unique strings in 
lexiographical order with their frequency
N <=10^5
|s| <= 100
*/
 
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	map < string , int > m;
	for(int i = 0 ; i < n ; i++){
		string s;
		cin>>s; 
		m[s] = m[s] + 1 ; 
		// or m[s]++;
	}
	for(auto t : m){
		cout<<t.first << " " << t.second<<endl;
	}
    
}