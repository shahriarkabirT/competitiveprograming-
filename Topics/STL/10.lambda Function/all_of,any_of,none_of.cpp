#include <bits/stdc++.h>
using namespace std;

int main(){

	//basics of lambda function
	cout<<[](int x){return x+2;}(5)<<endl;

	auto y = [](int x){return x+5;};

	cout<<y(5)<<endl;
    //all of , any of , none of
	vector <int> v = {-3, -4 , -3};
	cout<<all_of(v.begin(), v.end(),
		[](int x){return x > 0;})<<endl;
	cout<<any_of(v.begin(), v.end(), 
		[](int x){return x > 0;})<<endl;
	cout<<none_of(v.begin(),v.end(),
		[](int x){return x > 0;})<<endl; 


}

	