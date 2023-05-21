
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;

	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	
	int toastNum = (k*l)/nl;
	int toastNum2 = c*d;
	int toastNum3 = p/np;

	if(toastNum<toastNum2 && toastNum<toastNum3){
		cout<<toastNum/n;
	}
	else if(toastNum2<toastNum3){
		cout<<toastNum2/n;
	}
	else{
		cout<<toastNum3/n;
	}


}
