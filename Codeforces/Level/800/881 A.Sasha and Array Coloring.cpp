#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr , arr + n);
        vector<int>v;
       for (int i = 0; i < n/2; i++) {
            v.push_back(arr[n-i-1]-arr[i]);
        }
        int sum = 0;
        for(auto i : v){
        	sum+=i;
        
        }
        cout<<sum<<endl;
    }

    return 0;
}
