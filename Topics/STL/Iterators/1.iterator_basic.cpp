
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
    cout<<v.size()<<endl;
    for(int i = 0 ; i < v.size() ; i++){
      cout<<v[i]<<" ";
  }
}

int main(){
   vector<int>v;
   int n; 
   cin>>n;

   for(int i = 0 ; i < n; i++){
    int x;
    cin>>x;
    v.push_back(x);
   }

   vector<int> :: iterator t = v.begin();

   for(t = v.begin() ; t != v.end() ; t++){
    cout<<(*t)<<" ";
   }
    
}

