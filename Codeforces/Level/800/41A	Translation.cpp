 #include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin>>s; 
  string rev;
  cin>>rev;
  int flag=1;
  //hun
  //nuh

  for(int i = 0 ; i < s.size(); i++){
    if(s[i]!=rev[s.size()-i-1]){
        flag = 0;
    }
    
    
  }
  if(flag == 0){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }


}
