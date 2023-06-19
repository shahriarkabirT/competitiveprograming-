#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[5]={2,3,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sizeof(arr[0])<<endl;
    for(int i = 0 ; i < 10 ; i++){
        cout<<arr[i%n]<<" ";
    }
}
