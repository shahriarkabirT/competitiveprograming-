
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int minCoin;
    int value1 =0 , totalValue=0 , value2;
   for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
         totalValue += arr[i];
    } 

    sort(arr, arr+n , greater<int>());

    for(int i = 0 ; i < n ; i++){
        value1+=arr[i];
        value2 = totalValue - value1;
   
        if(value1 > value2) {
            minCoin = i + 1;
            break;
        }
    } 
cout<<minCoin;

}