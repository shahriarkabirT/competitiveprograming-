#include <bits/stdc++.h>
using namespace std;

int main() {

	int t ; 
	cin>>t;
	while(t--){

	stack<char>st;

	string s ; 
	cin>>s;
	int flag = 1 ;

	for(int i = 0 ; i < s.size() ; i++){

		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
		
		}
		else{
			if(!st.empty()){
			if(s[i] == ')' && st.top() == '('){
		
				st.pop();
			}
			else if(s[i] == '}' && st.top() == '{'){
				
				st.pop();
			}
			else if(s[i] == ']' && st.top() == '['){
				
				st.pop();
			}
			
			else{
				cout<<"NO"<<endl;
				flag = 0;
				break;
			}
			}
			else{
				cout<<"NO"<<endl;
				flag = 0;
				break;

			}
		}
	}
if(flag == 1){
	if(st.empty()){
	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}

}

}
