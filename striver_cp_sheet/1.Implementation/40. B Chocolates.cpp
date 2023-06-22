#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<long long> v;
	for(int i = 0 ; i < n ; i++){
		long long x ;
		cin>>x;
		v.push_back(x);
	}
	long long sum = v[n-1];
	for(int i = n-1; i>0; i--){
		if(v[i]!=0){
			if(v[i]>v[i-1]){
			sum+=v[i-1];
			}
			else{
				sum+=v[i]-1;
				v[i-1]=v[i]-1;
				if(v[i]-1==0){
					break;
				}
			}
		}
		
	}
	cout<<sum<<endl;
}
