#include <bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
	int t;
	cin>>t;

	while(t--){
	int n;
    cin >> n;
    int count ;
    vector<int> arr(n);
  	vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MAX;
    int flag = 0;
    for(int i = 0 ; i < n - 1; i++){
    	if(arr[i] <= arr[i+1]){
    		int res =((arr[i+1]-arr[i])/2)+1;
    		if(res<min) min = res , max = min;
    		else max = min;
    	}
    	else{
    		flag = 1;

    		break;
    	}


    }
    if(flag == 0){
    	cout<<min<<endl;
    }
    else{
    	cout<<0<<endl;
    }
    

}
    return 0;
}