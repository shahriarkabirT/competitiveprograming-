#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const long long M2 = 1e18 + 7;
bool is_sorted(const vector<int>& arr){
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
bool is_even(int n){
	if(n&1==1) return false;
	else return true;
}
int gcd(int a , int b){

    if( b == 0 ) return a;

    return (b , a%b);
}
int lcm(int a , int b){
	
	return (a*b)/gcd(a,b); 
}
vector<vector<int>>subsets(vector<int> &nums){
	int it = 1<<nums.size();
	vector<vector<int>>subsets;
	for(int i = 0 ; i < it; i++){
		vector<int>subset;
		for(int j = 0 ; j < nums.size(); j++){
			if((i & (1<<j)) != 0){
				subset.push_back(nums[j]);
			}
		}
		subsets.push_back(subset);
	}
	return subsets;
}
int binExpRecur(int a , int b){
	if(b == 0 ) return 1 ;
	int res = binExpRecur(a , b/2);
	if(b & 1){
		return a * (res * 1LL * res) % M;
	}
	else{
		return (res * 1LL * res) % M;
	}
}
int binExp(int a , int b){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a)%M;

			a = (a * 1LL * a)%M;

			b = b >> 1;
		}
	return ans;
}
long long binMultiply(long long a , long long b){
	long long ans = 0;
	while(b > 0){
		if(b&1) ans = (ans + a) % M2;
		a = (a + a) % M2;
		b>>=1;
	}
	return ans;
}
long long binExpLrg(long long a , long long b){
	long long ans = 1;
		while(b > 0){
			if(b&1) ans = binMultiply(ans , a);

			a = binMultiply ( a , a);

			b = b >> 1;
		}
	return ans;
}

void solve(){


	}

int main() {
		
			solve();
			
}