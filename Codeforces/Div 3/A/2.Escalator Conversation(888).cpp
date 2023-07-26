#include <bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

void showBinary(int a){
	for(int i =  5; i >= 0 ; --i){
		cout<<((a>>i)&1);
		}
		cout<<endl;
}


void solve(){

	int n,m,k,H;
	cin>>n>>m>>k>>H;

	int h_dif = abs(m*k - k);

	int count = 0;

	for(int i = 0; i < n ; i++){
		int x;
		cin>>x;
		if(((abs(H - x) % k == 0) && abs(H - x) <= h_dif && (H-x)!=0)){
			count++;
		}
	}
	cout<<count<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){

		solve();
	}
    
}