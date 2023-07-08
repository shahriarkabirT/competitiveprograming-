
#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
int hsh[N+7];
int cap[N+7];
int main()
{

	string a,b,s;


	cin>>a>>b>>s;

	for(int i = 0 ; i<s.length(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			cap[i]++;
		}
	}

	vector<char> v;

transform(s.begin(), s.end(), s.begin(), ::tolower);




for(int i = 0 ; i < s.length(); i++){
for(int j = 0 ; j < a.length(); j++){

	if(s[i]==a[j]){
		v.push_back(b[j]);
		hsh[i]=1;
		
	}
	
	}
	}

for(int i = 0 ; i < s.length() ; i++){
	if(hsh[i]==0){
		v.insert(v.begin() + i, s[i]);
}
	

}

string str(v.begin(),v.end());

for(int i = 0 ; i<str.length(); i++){

	if(cap[i]>0){
		str[i]= str[i]-32;
	}
}
cout<<str;


}
