#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,flag=0;

string s; 
cin>>s;



for(int i = 0 ; i < s.size(); i++){

	if(s[i]=='4' || s[i]=='7'){
	
		
		flag++;
	

	}
	

}
if(flag == 7 || flag == 4) cout<<"YES";
else cout<<"NO";

}




