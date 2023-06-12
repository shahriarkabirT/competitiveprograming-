#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	int m1 = 0 ;
	int m2 = 0 ;
	int m3 = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin>>x;
		if(x>m1) m2 = m1 , m1 = x;
		else if(x>m2) m3 = m2, m2 = x;
		else if(x>m3) m3 = x;

	}
cout<<m1<<" "<<m2<<" "<<m3;
}


//finding maximum values with O(N) complexity