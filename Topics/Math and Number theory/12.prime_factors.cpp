#include<bits/stdc++.h>
using namespace std;
vector<int>prime_factors(int n){
	vector<int> v;
	for(int i = 2 ; i * i <= n ; i++){
		while(n%i==0){
			v.push_back(i);
			n = n/i;
		}
	}
	if(n>1) v.push_back(n);
	return v;
}
/*logic
   32
   1 * 32
   2 * 16 
   4 * 8

   32/2
   16/2
   8/2
   4/2
   2/2
   1 = false , return 2 2 2 2 2
*/





int main(){
		int t;
		cin>>t;
		while(t--){
			vector<int> v;
			v = prime_factors(2);
			for(auto i : v) cout<<i<<" ";
		}
			
}