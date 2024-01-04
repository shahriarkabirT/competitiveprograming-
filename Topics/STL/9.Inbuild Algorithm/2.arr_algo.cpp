
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	int min = *min_element(a,a+n);
	cout<<min<<endl;
	int max = *max_element(a,a+n);
	cout<<max<<endl;
	int sum = accumulate(a,a+n, 0);
	cout<<sum<<endl;
	int ct = count(a,a+n,2);
	auto it = find(a,a+n,2);

	if(it != a+n){
		cout<<*it<<endl;
	}
	else{
		cout<<"Nt found"<<endl;
	}
	
	string s = "Hello";
	reverse(a+1,a+n);

	cout<<s<<endl;
	reverse(a,a+n);
	for(auto val : a){
		cout<< val << " ";
	}
}
