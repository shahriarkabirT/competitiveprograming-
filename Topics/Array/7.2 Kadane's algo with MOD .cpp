//codeforces round 936, div 2 , problem B , kadane's algo 

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
#define sortasc			sort(a.begin(),a.end())
#define sortdsc			sort(a.begin(),a.end(),greater<int>())		
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
const int MOD = 1e9 + 7;

void solve(){
		int n,k;
		cin>>n>>k;

		vector<int>a(n);
		int arraySum = 0;
		for(int i = 0; i < n ; i++){
			in a[i];
			arraySum =(arraySum + a[i]);
		}

		int mx = 0;
		int sum = 0;
		for(int i = 0 ; i < n;i++){
		
				sum = (sum + a[i]);
			

			if(mx < sum){
				mx = sum;
			}

			if(sum < 0){
				sum = 0;
			}	
		}

		int ans = 0;
		int d = mx;
		for(int i = 1 ; i <= k ; i++){
			ans = ((ans % MOD) + (d % MOD)) % MOD;
			d = ((d %MOD) * (2 % MOD)) % MOD;
		

		}

		cout<<((((ans%MOD)+(arraySum%MOD))%MOD)+MOD)%MOD<<endl;


	
}
signed main(){
        //in_out
        faster

		tc solve();


}
