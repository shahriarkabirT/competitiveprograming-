#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
		int sum = 0 ;
		vector <long long> v;
		set<int>s;
	for(int i = 0 ; i < n ; i++){
		
		long long a;
		cin>>a;

		if(v.size()<1)
		{
			v.push_back(a);
			sum++;
		}
		else{
			v.push_back(a);

			if(v[i]>v[i-1]){
				sum++;
			
			}
			else{
				s.insert(sum);
				
				sum = 1;

			}
		}
		s.insert(sum);
		
	}
	auto it = --s.end();
	cout<<*it;

}
