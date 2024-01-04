#include <bits/stdc++.h>
using namespace std;

void solve(){
	double x1,y1;
	double x2,y2;

	cin>>x1>>y1>>x2>>y2;

	double alax = sqrt( abs(x1*x1) + abs(y1*y1)) ;

	double bob = sqrt( abs(x2*x2) + abs(y2*y2)) ;


	if(alax > bob){
		cout<<"AlEX"<<endl;
	}
	else if(alax < bob){
		cout<<"BOB"<<endl;
	}
	else{
		cout<<"EQUAL"<<endl;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		solve();
    }
}