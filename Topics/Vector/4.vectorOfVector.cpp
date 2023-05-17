
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>&v){
    cout<<v.size()<<endl;
    for(int i = 0 ; i < v.size() ; i++){
      cout<<v[i]<<" ";
  }
}

int main(){
    int N;
    cin>>N;
    vector <vector<int> > v;
    for(int i = 0 ; i < N ; i++){
        int n; 
        cin>>n; 
        vector<int>temp;
        for(int j = 0 ; j < n ; j++){
            int x; 
            cin >> x;
            temp.push_back(x);
        }

        v.push_back(temp);
    }
    v.push_back(vector<int> ());
    v[2].push_back(2);
    v[2].push_back(3);
    for(int i = 0 ; i < v.size() ; i++){
        printVec(v[i]);
        cout<<endl;
    }
    
}