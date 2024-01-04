#include<bits/stdc++.h>
using namespace std;

int hsh[10];


int main(){
    int y,flag=0;
    cin>>y;
    string s = to_string(y);
    while(true){
    int temp = stoi(s);
    temp++;
    s = to_string(temp);


for(int i = 0 ; i < 4 ; i++){
    hsh[s[i]-'0']++;
}
  for(int i = 0 ; i < 10 ; i++){
    if(hsh[i]>1){
        flag = 1;
        break;
    }
  }
  if(flag == 0){
    cout<<s;
    break;
    
  }
  else{
    flag = 0;
    for(int i = 0 ; i < 10 ; i++){
    hsh[i]=0;
  }
  }
}
}

