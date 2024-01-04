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
#define tc              int t; cin>>t;while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define nl              <<endl
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc             <<" "
#define int long long
//--------------------------------------------------------------------------//






//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//



bool chk(int cnt, vector<int>&a, vector<int>&b, int k){

	for(int i = 0 ; i < a.size() ; i++){
		int ne = cnt * a[i];
		if(ne <= b[i]){
			continue;
		}
	
		int need = (cnt * a[i]) - b[i];

		k -= need;

		if(k < 0){

			return false;
			}
	}
	
	return true;
}


void solve(){
	int n , k;
	in n >> k ;
	vector<int>a(n);
	vector<int>b(n);
	for(int i = 0 ; i < n; i++){
		in a[i];
	}
	for(int i = 0 ; i < n; i++){
		in b[i];
	}

	int lo = 0; 
	int hi = 1e9;
	

	while(lo<=hi){

		int mid = (hi + lo)/2;
		

		if(chk(mid , a , b , k) == true){
			lo = mid + 1;
		}
		else {
			hi = mid - 1; 
		}
	}

	cout<<lo - 1<<endl;	



	



}

signed main(){
    in_out
	faster

	
	  solve();


}

