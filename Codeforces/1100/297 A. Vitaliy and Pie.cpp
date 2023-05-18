
#include <bits/stdc++.h>
using namespace std;


int main(){

	int n ;
	cin>>n;

	string s;
	cin>>s;

	int count = 0;
	unordered_map <char, int > m;

	for(int i = 0; i < (n*2)-2 ; i+=2){

		m[s[i]]++;

		char c = tolower(s[i+1]);

		auto it = m.find(c);

		if(it != m.end()){
			if(m[c] > 1 ){
				m[c]--;

			}
			else {
				m.erase (c);
			}
		}
		else{
			count++;
		}
		
	}
		cout<<count;
}