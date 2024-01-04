#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
vector<bool> is_prime(N,1);

int main(){

	is_prime[0] = is_prime[1] = false;

	for(int i = 2 ; i < N ; i++){

		if(is_prime[i] == true){
			for(int j = 2 * i ; j < N ; j += i){
				is_prime[j] = false;
			}
		}
	}

	cout<<is_prime[6];

}
