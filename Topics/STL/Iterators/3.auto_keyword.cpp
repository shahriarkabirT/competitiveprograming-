
#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> v;
int n ;
cin>>n;
for(auto i = 0 ; i < n ; i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(auto &value: v) {           //auto keyword 
    value++;
    cout<<value<<" ";
}
vector <pair<int,int>> p_v;
int w;
cin>>w;

for(auto i = 0 ; i < w; i++){
    int x, y; 
    cin>>x>>y;
    p_v.push_back({x,y});
}
cout<<endl;
for(auto &value: p_v){      //use of auto keyword instead of pair<int,int>
    cout<<value.first<<" " <<value.second<<endl;
}
}