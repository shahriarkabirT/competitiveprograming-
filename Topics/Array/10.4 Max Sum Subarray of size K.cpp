#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int k, vector<int> &a , int n){
		long long firstSum = 0;
		for(int i = 0 ; i < k ; i++){
			firstSum += a[i];
		}
		long long maxSum = firstSum ;

		for(int i = 0 ; i < n - k ; i++){
			long long int value1 = firstSum - a[i];
			long long int value2 = value1 + a[i+k];

			//cout<<value2<<endl;
			maxSum = max(maxSum , value2);
			firstSum = value2;
		}

		return maxSum;




            }
  
    int main(){
        int t;cin>>t;
        while(t--){
            int n , k;
            cin>>n>>k;
            vector<int> a(n);
            for(int i = 0 ;i  < n; i ++){
                cin>>a[i];
            }
            cout<<maximumSumSubarray(k, a , n)<<endl;
        }
    }
