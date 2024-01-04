#include <bits/stdc++.h>
using namespace std;
void solve(){
	int x , y , n;
	cin>>x >> y >> n;
	std::vector<int> a(n);
	a[0] = x;
	a[n-1] = y;
	int flag = 1;
	int count = 1;
	int check = 1;
	for(int i = n-2 ; i > 0 ; i--){
		a[i] = a[i+1] - count;
		count++;
	}
	if(a[1] - x <= a[2] - a[1]){
		cout<<-1<<endl;
	}
	else{
		for(auto &i : a){
			cout<<i << " ";
		}
		cout<<endl;
	}
}

int main(){
		int t;
		cin>>t;
		while(t--){
			solve();
			}		}
