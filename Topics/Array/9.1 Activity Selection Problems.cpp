#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> &a , pair<int,int> &b)
{
	return a.second<b.second ;
}
class Solution
{
    public:


int activitySelection(vector<int>start ,vector< int> end , int n){

		vector<pair<int,int>>arr(n);
		for(int i = 0 ;i < n; i++){
			arr[i].first = start[i];
			arr[i].second = end[i];
		}

		sort(arr.begin(),arr.end(),compare);

		// for(int i = 0 ; i < n ; i ++){
		// 	cout<<arr[i].first <<" "<< arr[i].second <<endl;
		// }

		int i = 0 ;
		int count = 1;
		for(int j = 1 ; j < n ; j++){
			if(arr[j].first > arr[i].second){
				count++;
				i = j;
			}
		}
		

		return count;

		//cout<<endl;
		//cout<<count<<endl;
		//return count;

}

};