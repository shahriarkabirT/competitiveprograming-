#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n, m;
    cin>>n>>m;
    long long arr[m];
    long long int sum = 0;
    for(int i = 0 ; i < m ; i++){

        cin>>arr[i];


    }
    sum = sum + (arr[0]-1);

    for(int i = 1 ; i < m ; i++){
        if(arr[i]<arr[i-1]) sum = sum + (n-(arr[i-1]-arr[i]));
        else if(arr[i]>arr[i-1]) sum = sum + (arr[i] - arr[i-1]);
        
    }
    cout<<sum<<endl;
}
