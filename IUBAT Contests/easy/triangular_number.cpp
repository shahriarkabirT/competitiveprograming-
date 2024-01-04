#include<bits/stdc++.h>
using namespace std;

bool isTriangular(int n){
	if(n < 0) return false;

	int sum = 0;

	for(int i = 1 ; sum <= n ; i++){
	
		sum+=i;
		if(n == sum) return true;
	}

	

	return false;
}

int main()
{
    int n;
    cin>>n;

    if (isTriangular(n))
       cout<<"YES"<<endl;
    else
        cout << "NO"<<endl;
 
    return 0;
}