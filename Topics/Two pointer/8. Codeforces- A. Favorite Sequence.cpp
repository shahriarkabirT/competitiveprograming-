//https://codeforces.com/problemset/problem/1462/A

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
	int n;
	cin>>n;
	vecint a(n);
	for(int i=0 ; i < n; i++){
		cin>>a[i];
	}
	int i = 0 ;
	int j = n - 1 ;
	int count = 0;
	while(i<=j){
		if(count%2){
			cout<<a[j]<<" ";
			j--;
			count++;
		}
		else{
			cout<<a[i]<<" ";
			i++;
			count++;
		}

	}
	cout<<endl;
}
	


int main(){
        //in_out
        	faster
 
		tc solve();
 
 
} 																																																																			