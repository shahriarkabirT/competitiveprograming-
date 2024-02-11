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
#define Loop 			for(int i = 0 ; i <= n ; i++)
#define LooP 			for(int i = 1 ; i <= n ; i++)
#define revloop 		for(int i = n-1; i>0 ; i--)
#define tc              int t; cin>>t;while(t--)
#define faster          ios::sync_with_stdio(0); cin.tie(0);cout.tie(0); 
#define nl              <<"\n"
#define in 				cin>>
#define gcd(a,b)        __gcd(a,b)
#define in_out          freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define spc             <<" "    
//--------------------------------------------------------------------------//






//--------------------------------------------------------------------------//
//--------------------------------------------------------------------------//
const int N = 1e5 + 7; 

int hsh[N];
int hs[N];

void solve(){
	int n;
    cin>>n;
    int arr[n+1];
    int max = 0 ;
    for(int i = 1 ; i <= n; i++){
        in arr[i];
        int x = arr[i];
        if(x >= max) max = x;
        hsh[x]++;
    }

    int flag = 1;
    for(int i = 1; i < max; i++){

        if(hsh[i] < hsh[i+1] || hsh[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        cout<<-1<<endl;
    }
    else{
        cout<<hsh[1]<<endl;
        for(int i = 1; i <= n ; i++){
            int x = arr[i];
            if(hs[x] == 0){
                out 1 spc ;
                hs[x]++;
            }
            else{
                out hs[x]+1 spc;
                hs[x]++;
            }
        }
    }
}
int main(){
   // in_out
	faster


	//tc solve();
    solve();
}	

