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
//#define int long long
//--------------------------------------------------------------------------//
vector<int> subarraySum(vector<int>a , int n , ll sum){
		int start = 0;
		int end = 0;

		int currentSum = a[0];
		for(int i = 1 ; i <= n ; i++){
			
			if(currentSum > sum){
				while(currentSum > sum && start < i - 1){
					
					currentSum -= a[start];
					start++;
				//	cout<<i<<" "<<"start: " << start<<endl;
				}
			}
			if(currentSum == sum){
				vector<int>ans(2);
				ans[0] = start + 1;
				ans[1] = end + 1;
				return ans; 
			}
			// cout<<i spc n<<endl;
			// cout<<currentSum spc sum nl;
			 if(i < n){
				currentSum+=a[i];
				//cout<<i<<" "<<"cu: "<<currentSum<<endl; 
				end++;
			}
			
			
			// cout<<"currentS: "<<currentSum<<endl;
			// cout<<i<<endl;
			
		}
		vector<int> badans(1);
		badans[0]=-1;
		return badans;

		
}

void solve(){
		
	int n;
	long long s;
	cin>>n>>s;
	vector<int>v(n);
	for(int i = 0 ; i < n ; i++){
		cin>>v[i];
	}
	vector<int>res;
	res = subarraySum(v,n,s);
	cout<<res[0] <<" "<<res[1]<<endl;
	
}
signed main(){
        //in_out
        faster

		tc solve();


}
