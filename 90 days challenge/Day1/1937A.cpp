// https://codeforces.com/contest/1006/problem/C

#include<bits/stdc++.h>
using namespace std;

typedef bool                      boo;
typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    lu;
typedef double                    db;


//--------------------------------------------------------------------------//


#define out 			cout<<
#define loop 			for(int i = 0 ; i < n; i++)
#define vecint			vector<int>
#define revloop 		for(int i = n-1; i>=0 ; i--)
#define tc              int t; cin>>t; while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define nl              <<endl
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc 			<<" "<<
#define int long long
//--------------------------------------------------------------------------//


void solve(){
	ll n;
	cin>>n;
	ll ans = 1;
	for(ll i = 1 ; i <= n ; i = i*2){
		//cout<< i spc ans nl;
	
		ans = i;
		//cout<<ans spc n nl;
		if(ans == n){
		//	cout<<'f' nl;
			break;
		}
		else if(ans > n){
				//cout<<"'ff'"<< endl;
			ans = ans/i;
			break;
		}
		

	}
	cout<<ans<<endl;


}
signed main(){
        //in_out
        faster

		tc solve();


}
