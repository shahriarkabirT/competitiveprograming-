#include<bits/stdc++.h>
#define ll long long
#define out cout<<
#define loop for(int i = 0 ; i < n; i++)
#define Loop for(int i = 0 ; i <= n ; i++)
#define LooP for(int i = 1 ; i <= n ; i++)
#define revloop for(int i = n-1; i>0 ; i--)
#define pi 3.1416 
#define nl endl
#define in cin>>

using namespace std;






/*--------------------------------------------------------------
--------------------------------------------------------------
--------------------------------------------------------------
--------------------------------------------------------------*/

ll sumNatural(ll n)
{
    ll sum = (n * (n + 1)) / 2;
    return sum;
}
ll suminRange(ll l, ll r)
{
    return sumNatural(r) - sumNatural(l - 1);
}


void solve(){
	ll n,k,x;
	cin>>n>>k>>x;

	ll sum1 = sumNatural(k);

	ll sum2 = sumNatural(n) - sumNatural(n-k);

	if(x>= sum1 && x <= sum2) cout<<"YES"<<endl;
	else out "No"<<endl;

	
}
int main(){
	int t;
	in t;
	while(t--){
		solve();
	}
}	

