#include<bits/stdc++.h>
using namespace std;


int main() {
   string s;
   cin>>s;
   string s1;
   for(int i = 0; i < s.size(); i++){
    if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||s[i]=='Y'||s[i]=='y'){
        continue;
    }
    else{
        s1.push_back('.');
        s1.push_back(tolower(s[i]));
    }
   }
   cout<<s1<<endl;
}
