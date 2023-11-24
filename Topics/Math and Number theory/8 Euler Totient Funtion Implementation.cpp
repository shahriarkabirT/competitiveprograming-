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
#define faster          ios::sync_with_stdio(0); cin.tie(0);
#define nl              <<endl
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc             <<" "
//--------------------------------------------------------------------------//






//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
void primefactors(set<int>&s, int n){
	for(int i = 2 ; i * i <= n ; i++){
		while(n%i==0){
			s.insert(i);
			n = n/i;
		}
	}
	if(n>1) s.insert(n);
}
long long EularbinExp(int  a , int b , int m){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a) % m;

			a = (a * 1LL * a) % m;

			b = b >> 1;
		}
	return ans;
}
int findPrimitiveRoots(int n){
	int phi = n - 1;
	set<int>s;
	primefactors(s,phi);

	for(int i = 2 ; i < n ; i++){
		bool flag = false;
		for(auto it = s.begin(); it != s.end() ; it++){
			if(EularbinExp(i , phi / *(it) , n) == 1){
				flag = true;
				break;
			}
		}
		if(flag == false) {
			return i;
		}
	}
	return -1;
}

int phi(int n)
{
    // Initialize result as n
    int result = n; 
  
    // Consider all prime factors of n 
    // and subtract their multiples 
    // from result
    for(int p = 2; p * p <= n; ++p)
    {
         
        // Check if p is a prime factor.
        if (n % p == 0) 
        {
             
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
                 
            result -= result / p;
        }
    }
  
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
         
    return result;
}


void solve(){
	int n;
	cin>>n;

	cout<<findPrimitiveRoots(n)<<" ";
	cout<<phi(n-1);
}

int main(){
        //in_out
        faster


	 solve();


}
