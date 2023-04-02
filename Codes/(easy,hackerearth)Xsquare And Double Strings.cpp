#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int arr[100];
		for(int i = 0 ; i < 100; i++){
			arr[i]=0;
		}
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			arr[s[i]-'a']++;
		}
		int flag=0;
		for(int i = 0; i<26; i++){
			if(arr[i]>1){
				flag=1;
			}
			}
			if(flag==0){
				cout<<"No"<<endl;
			}
			else if(flag==1){
				cout<<"Yes"<<endl;
			}
		}



	}
