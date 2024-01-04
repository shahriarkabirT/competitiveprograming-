#include<bits/stdc++.h>
using namespace std;

int main(){
int k ,n ,w ,need;
int totalMoney = 0;

cin>>k>>n>>w;
for(int i = 1 ; i <= w ; i ++){
	totalMoney = totalMoney + i*k ;
}
if(totalMoney > n)
{
need = totalMoney - n;
}
else{
	need = 0;
}
cout<<need;



}