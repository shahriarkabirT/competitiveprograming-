#include<bits/stdc++.h>
using namespace std;

int main(){
int a, b, c = 0;

cin>>a>>b;

if(a == b){
	cout<<1;
}
else{
	while(a<=b){
			++c;
		a = a*3;
		b = b*2;



		

	}
	cout<<c;
}



}