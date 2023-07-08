#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
      int  flag = 0 ;
 
        cin>>s;
 
        string s2 = "codeforces" ;
 
        for(int i = 0 ; i <  10 ; i++){
            if(s[i] != s2 [i]){
                flag++;
            }
 
        }
        cout<<flag<<endl;
 
    }
}