#include<bits/stdc++.h>
using namespace std;

int main(){
	int t ;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<long long> v1;
		vector<long long> v2;
		for(int i = 0; i < n ; i++){
			int x;
			cin>>x;
			v1.push_back(x);
		}
		for(int i = 0; i < m ; i++){
			int x;
			cin>>x;
			v2.push_back(x);
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		int temp;
		if(n>m){
			temp = n;
		}
		else temp = m;

		while(true){

			if(!v1.empty() && !v2.empty()) {

				if(v1.back()>v2.back())
				{
					int temp1 = v1.back();
					int temp2 = v2.back();
					v1.pop_back();
					v2.pop_back();
					v1.push_back(temp1-temp2);
					sort(v1.begin(), v1.end());
				} 
				else if(v1.back()<v2.back()){
					int temp1 = v1.back();
					int temp2 = v2.back();
					v1.pop_back();
					v2.pop_back();
					v2.push_back(temp2-temp1);
					sort(v2.begin(), v2.end());
				}
				else{
					v1.pop_back();
					v2.pop_back();
				}
			}
			else{
				break;
			}	
		}

		if(v1.size()>v2.size()){

			cout<<"Tsondu"<<endl;
		}
		else if(v1.size()<v2.size()){

			cout<<"Tenzing"<<endl;
		}
		else{
				cout<<"Draw"<<endl;
		}
	}
}
