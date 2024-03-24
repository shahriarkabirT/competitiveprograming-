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
#define gcd        		__gcd
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc 			<<" "<<
#define int long long
//--------------------------------------------------------------------------//
vector<int> max_of_subarrays(int arr[],  int n , int k ){

	 	deque<int>dq;
	 	vector<int>ans;

	 	for(int i = 0 ; i < n ; i++){
	 		
	 		if(!dq.empty() and dq.front() == i - k) dq.pop_front(); 

	 		while(!dq.empty() and arr[dq.back()] <= arr[i])
	 			dq.pop_back();


	 		dq.push_back(i);

	 		if(i >= k - 1) ans.push_back(arr[dq.front()]);


	 	}

		return ans;
}

signed main() {
int t;
cin >> t;
while(t--){
int n, k;
cin >> n >> k;

int arr[n];

for(int i = 0;i<n;i++) cin >> arr[i];


vector <int> res = max_of_subarrays(arr, n, k);
for (int i = 0; i < res. size (); i++)
cout << res[i] << " ";
cout << endl;
}
}
