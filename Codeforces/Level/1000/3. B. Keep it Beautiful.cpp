#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 
int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n;                  cin>>n;
      vector<int> a(n),taken;
      string ans="";
      bool broken=false;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(taken.empty()){
            ans.push_back('1');
            taken.push_back(a[i]);
         }
         else{
            if(broken){
               if(a[i]<taken.back()){
                  ans.push_back('0');
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
            else{
               // till now, the array is sorted
               if(a[i]>=taken.back()){
                  ans.push_back('1');
                  taken.push_back(a[i]);
               }
               else{
                  if(a[i]>taken[0]){
                     ans.push_back('0');
                  }
                  else{
                     broken=true;
                     ans.push_back('1');
                     taken.push_back(a[i]);
                  }
               }
            }
         }
      }
 
      cout<<ans<<endl;
   }
   return 0;
}