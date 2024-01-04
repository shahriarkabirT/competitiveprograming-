#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
 
	cin>>s;
 
	string s1;
 
	if(9-(s[0]-'0')==0 || (s[0]-'0') < 5){
		s1 = s[0];
		}
	else if((s[0]-'0') > 4){
		char c = char(('9' - (s[0] - '0')));
		s1.push_back(c);
	}
 
	for(int i = 1 ; i < s.size(); i++){
 
		if((s[i]-'0') < 5){
		
		s1.push_back(s[i]);
		}
		else if((s[i]-'0') > 4){
		char c = char(('9' - (s[i] - '0')));
		s1.push_back(c);
	}
	}
cout<<s1;
	}
 