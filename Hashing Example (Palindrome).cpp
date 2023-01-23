//brute force approach

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,q; 
		cin>>n>>q;
		string s;
		cin>>s;
		while(q--){
		int hsh[26];
		for(int i = 0; i<26; i++){
			hsh[i]=0;
		}
		
		int l,r;
		cin>>l>>r; 
		l--;r--;
		for(int i= l; i<=r; i++){
			hsh[s[i]-'a']++;
		}
		int oddCount = 0 ;
		for(int i = 0; i<26; i++){
			if(hsh[i]%2 != 0)
				oddCount++;
		}
		if(oddCount>1)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;

	}

	}
}
