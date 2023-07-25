//https://codeforces.com/blog/entry/73558


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

void solve(){
	int n;
	cin>>n;
	vector<int> masks(n, 0);
	for(int i = 0 ; i < n ; i++){
		int days;
		cin>>days;

		int mask = 0;
		for(int i = 0 ; i < days ; i++){
			int x;
			cin>>x;
			mask = mask | 1 << x;
		}
		masks[i] = mask;
	}
	int common_days = 0;
	int max_days = 0;
	int p1,p2;
	for(int i = 0 ; i < n ; i++){
		for(int j =  i+1 ; j < n ; j++){
			int intesect = masks[i] & masks[j];
			common_days = __builtin_popcount(intesect);
			if(common_days > max_days){
				max_days = common_days;
				p1 = i;
				p2 = j;
			}		
		}
	}
	cout<<max_days<<" "<<p1<<" "<< p2<<endl;

}

int main() {
	
		solve();
    
}