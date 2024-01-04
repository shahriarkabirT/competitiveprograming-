#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    int countA = 0, countB = 0;

    cin>>n;

    string s;
    cin>>s;

    for(int i = 0 ; i < n; i++){
        if(s[i]=='A'){
            countA++;
        }
        else if(s[i]=='D'){
            countB++;
        }
    }
    if(countA>countB){
        cout<<"Anton";
    }
    else if(countA==countB){
        cout<<"Friendship";
    }
    else {
        cout<<"Danik";
    }
}


