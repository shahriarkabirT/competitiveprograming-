#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> v;
int n ;
cin>>n;
for(int i = 0 ; i < n ; i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int &value: v) {
    value++;
    cout<<value<<" ";
}
vector <pair<int,int>> p_v;
int w;
cin>>w;

for(int i = 0 ; i < w; i++){
    int x, y; 
    cin>>x>>y;
    p_v.push_back({x,y});
}
cout<<endl;
for(pair<int,int> &value: p_v){
    cout<<value.first<<" " <<value.second<<endl;
}

}