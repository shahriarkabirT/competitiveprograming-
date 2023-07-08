#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int count =  0 ;
	int flag = 0 ;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='1'){
			count++;
			if(count >= 7){
				flag=1;
			}
		}
		else if(s[i]=='0'){
			count = 0;
		}
	}
for(int i=0; i<s.length(); i++){
		if(s[i]=='0'){
			count++;
			if(count >= 7){
				flag=1;
			}
		}
		else if(s[i]=='1'){
			count = 0;
		}
	}
if(flag == 1){
	cout << "YES";
}
else {
	cout << "NO";
}
}
