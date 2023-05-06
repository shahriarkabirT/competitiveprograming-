#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        int flag = 0;
        int ans = 0;
        int a[n];
        for(int i = 0 ; i < n ; i ++){
            cin>>a[i];
            if(a[i] == 0) {
                flag++;
            }
            else {
                ans = max(ans, flag);
                flag = 0;
            }
        }
        ans = max(ans, flag);
        cout << ans << endl;
    }
}