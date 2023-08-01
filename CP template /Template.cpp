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
bool is_even(int n){
	if(n%2==0) return true;
	else return false;
}
int gcd(int a , int b){

    if( b == 0 ) return a;

    return (b , a%b);
}
int lcm(int a , int b){
	
	return (a*b)/gcd(a,b); 
}

void solve(){

}
int main() {
	int t;
	cin>>t;
	while(t--){

		solve();
	}
    
}