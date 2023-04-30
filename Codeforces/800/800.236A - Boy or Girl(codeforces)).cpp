#include<bits/stdc++.h>
using namespace std;

int hsh[26];
	
int main() {
	string s;

	cin>>s;

	for(int i = 0 ; i < s.size(); i++){
		hsh[s[i]-'a']++;
	}
int count = 0;
for(int i = 0 ; i< 26 ; i++){
	
	if(hsh[i]>0) count++;
}

	if(count%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
	



}
