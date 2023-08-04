#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>subsets(vector<int> &nums){
	int it = 1<<nums.size();
	vector<vector<int>>subsets;
	for(int i = 0 ; i < it; i++){
		vector<int>subset;
		for(int j = 0 ; j < nums.size(); j++){
			if((i & (1<<j)) != 0){
				subset.push_back(nums[j]);
			}
		}
		subsets.push_back(subset);
	}
	return subsets;
}//subset


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i = 0 ; i < n ; i++){
		cin>>nums[i];
	}
	auto sub = subsets(nums);

	for(auto i : sub){
		for(int ele : i){
			cout<<ele << " ";
		}
		cout<<endl;
	}

	}
int main() {
	
		solve();
	

}