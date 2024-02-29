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
		int n;
		cin>>n;

		int arr[2][n];
		for(int i = 0 ;i < 2 ;i++){
			string s;
			cin>>s;
			for(int j = 0 ; j < n ; j++){
				arr[i][j] = s[j];
			}
		}
		string ans = "";
		ans+=arr[0][0];
		ll ways=1;
    	ll i=0;
   		ll j=0;
    	ll x=1;
		while(j<n-1){
        if(i==0){
            if(arr[i][j+1]=='1'&&arr[i+1][j]=='0'){
                ans+=arr[i+1][j];
                i++;
                ways=x;
                x=1;
            }
            else if(arr[i][j+1]==arr[i+1][j]){
                ans+=arr[i][j+1];
                j++;
                x++;
            }
            else{
                ans+=arr[i][j+1];
                j++;
                x=1;
            }
        }
        else{
            ans+=arr[i][j+1];
            j++;
        }
    }
    if(i==0){
        ans+=arr[1][n-1];
        ways=x;
    }
    cout<<ans<<"\n";
    cout<<ways<<"\n";
}
signed main(){
        //in_out
        faster

		tc solve();


}
