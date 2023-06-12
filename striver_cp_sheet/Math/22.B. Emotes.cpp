#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;

	cin>>n>>m>>k;
	long long m1 = 0, m2 = 0;
	for(int i = 0 ; i< n ; i++){
		int x;
		cin>>x;
		if(x>m1) m2 = m1 , m1 = x;
		else if(x>m2) m2 = x;
	}
	long long times = m / (k+1);
	long long cost = k*m1 + m2;
	cost = times * cost;

	cost += (m%(k+1)*m1);
	cout<<cost;

}
