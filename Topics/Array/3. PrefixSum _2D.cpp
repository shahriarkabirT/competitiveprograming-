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
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int pa[n][m];
		for(int i = 0 ;i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin>>a[i][j];
			}
		}
		pa[0][0] = a[0][0];
		//filling first row
		for(int i = 1 ; i < n ; i++){
			pa[i][0] = pa[i-1][0] + a[i][0];
		}
		//filling first column 
		for(int i = 1 ; i < m ; i++){
			pa[0][i] = pa[0][i-1] + a[0][i];
		}

		//rest
		for(int i = 1 ; i < n ; i++){
			for(int j = 1 ; j < m ; j++){
				pa[i][j] = a[i][j] + pa[i-1][j] + pa[i][j-1] - pa[i-1][j-1];
			}
		}

		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cout<<pa[i][j]<< " ";
			}
			cout<<endl;
		}
}
signed main(){
        //in_out
        faster

		 solve();


}
