#include<bits/stdc++.h>
#define int long long
using namespace std;
string f(string &s ,int l, int r){
	if(l>=r) return "Palindrome";
	
	if(s[l] != s[r]) return "Not palindrome";
	
	 return f(s,l+1,r-1); 
}



signed main(){
	string s;

	cin>>s;
	
	cout<<f(s,0,s.size()-1);

    }

