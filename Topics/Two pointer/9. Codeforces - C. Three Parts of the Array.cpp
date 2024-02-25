// https://codeforces.com/contest/1006/problem/C

#include<bits/stdc++.h>
using namespace std;

typedef bool                      boo;
typedef int                       li;
//typedef long long int             ll;
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
	vector<int>a(n);
	for(int i = 0 ; i < n; i++){
		cin>>a[i];
	}


	int i = 0;
	int j = n -	1;
	int sum1 = a[0];
	int sum2 = a[n-1];
	int mx = 0;
	while(i < j){
				
		//cout<<sum1 spc sum2 nl;
		if(sum1 == sum2){
			mx = max(mx,sum1);
			i++;
			j--;
			if(i < j){
				sum1+=a[i];
				sum2+=a[j];
			}
		}
		else if(sum1 < sum2){
			i++;
			sum1+=a[i];
		}
		else if(sum1 > sum2){
			j--;
			sum2+=a[j];
		}
	}
	cout<<mx<<endl;
}
signed main(){
        //in_out
        faster

		solve();


}
