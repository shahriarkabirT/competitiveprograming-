// 2. Find the pair Whose sum is closest to X 
#include<bits/stdc++.h>
using namespace std;
 
typedef bool                      boo;
typedef int                       li;
typedef long long int             ll;
typedef unsigned long long int    lu;
typedef double                    db;
 
 
//--------------------------------------------------------------------------//
 
 
#define out 			cout<<
#define loopn 			for(int i = 0 ; i < n; i++)
#define loopm			for(int i = 0 ; i < m; i++)
#define vecint			vector<int>
#define umap 			unordered_map<int,int>
#define revloop 		for(int i = n-1; i>=0 ; i--)
#define tc              int t; cin>>t; while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define nl              <<endl
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc 			<<" "<<
//--------------------------------------------------------------------------//

void solve(){
	
	int n,x;
	cin>>n>>x;
	vecint a(n);

	for(int i = 0 ; i < n ;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int ans = 0;
	int i = 0 ;
	int j = n - 1;
	int l ;
	int r ;
	int check = INT_MAX;
	while(i < j){
		int sum = a[i] + a[j];

		int diff = abs(x-sum);
		if(diff <= check){
			check = diff;
			//cout<<i << j <<endl;
			l = i;
			r = j;
		}

		if(sum < ans) i++;
		else j--; 

	}
	cout<<a[l] spc a[r]<<endl;
}
	


int main(){
        //in_out
        	faster
 
		solve();
 
 
} 																																																																			