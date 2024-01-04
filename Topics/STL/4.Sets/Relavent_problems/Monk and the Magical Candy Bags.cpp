
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		multiset<long long >s;
		
		int n,k;
		cin>>n;
		cin>>k;
		for(int i = 0 ; i < n ; i++){
			int a;
			cin>>a;
			s.insert(a);
		}
		long long max = 0;

		for(int i = 0 ; i < k ; i++){
			auto last_bag = (--s.end());
			long long candy_count = *last_bag;
			max+=candy_count;

			s.erase(last_bag);
			s.insert(candy_count/2);

		}
		cout<<max<<endl;

	}
}
