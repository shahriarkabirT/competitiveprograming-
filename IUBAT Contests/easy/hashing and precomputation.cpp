#include<bits/stdc++.h>
using namespace std;
const int N = 26;
int arr[26];



int main(){

	string s;

	getline(cin, s);

	string lowercaseStr;

    for (char c : s) {
        lowercaseStr += tolower(c);
    }

	for(int i = 0 ; i < s.size() ; i++){
		if((lowercaseStr[i] - 'a')>=0){
			arr[lowercaseStr[i] - 'a']++;
		}
	}

	for(int i = 0 ; i < 26 ; i++){
		if(arr[i]<1){
			cout<<"not pangram"<<endl;
			return 0;
		}
	}
	cout<<"pangram"<<endl;


}