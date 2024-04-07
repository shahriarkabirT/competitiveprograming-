#include<bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int arr[],  int n , int k ){
        map<long long , int > preSumMap;
        long long sum = 0 ; 
        long long maxLen = 0 ; 
        for(long long i = 0 ; i < n ; i++){
            sum += arr[i];
            long long rem = sum - k;
            if(sum == k){
                maxLen = i+1;
            }
            
            if(preSumMap.find(rem) != preSumMap.end()){
                long long len = i - preSumMap[rem];
                maxLen = max(maxLen,len);
            }
           if(preSumMap.find(sum) == preSumMap.end()) 
            preSumMap[sum] = i;
            
        }
        return maxLen;
    }
    int main(){
        int t;cin>>t;
        while(t--){
            int n , k;
            cin>>n>>k;
            int a[n];
            for(int i = 0 ;i  < n; i ++){
                cin>>a[i];
            }
            cout<<lenOfLongSubarr(a,n,k)<<endl;
        }
    }
