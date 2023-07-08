#include<bits/stdc++.h>
using namespace std;

int main(){
string s;

cin>>s;

int countCap=0,countSmall=0;

for(int i = 0 ; i < s.size() ; i++){
	int temp = s[i];
	if(temp <= 90 && temp >=65) countCap++;
	else if(temp <= 122 && temp >=97) countSmall++;
}
if(countCap==countSmall){
	for(int i = 0 ; i < s.size(); i++){
		char ch = tolower(s[i]);
		cout<<ch;
 	}
}
else if(countSmall<countCap){
	for(int i = 0 ; i < s.size(); i++){
		char ch = toupper(s[i]);
		cout<<ch;


 	}

}
else{

		for(int i = 0 ; i < s.size(); i++){
		char ch = tolower(s[i]);
		cout<<ch;
 	}


 	}

}

