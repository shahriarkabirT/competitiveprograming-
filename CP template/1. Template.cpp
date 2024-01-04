#include <bits/stdc++.h>
#define ll long long 
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

    return gcd(b , a%b);
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

bool is_prime(int n){
	if (n <= 1)
        return false;

	for(int i = 2 ; i * i <= n ; i++){
		
		if(n%i == 0){
			return false;
		}
	}
	return true;
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

			a = (a * 1LL * a) % M;

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
long long EularbinExp(int  a , int b , int m){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a) % m;

			a = (a * 1LL * a) % m;

			b = b >> 1;
		}
	return ans;
}
int superPow(int a, vector<int>& b) {
		int number = 0 ;
		for(auto &i : b){
			number = (number * 10 + i ) % 1140 ; 
		}
		return EularbinExp(a,number,1337);
		//return number;
}
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
void printDivisors(int a){
	for(int i = 1 ; i * i <= a ; i++){
		if(a%i == 0){
			cout<< i << " " << a/i <<endl;
		}
	}
}


/*
------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------
------------------------------------------------------------------
*/

void check(){

}

void solve(){
	
	}

int main(){
		int t;
		cin>>t;
		while(t--){
			solve();
			}
		
			
}