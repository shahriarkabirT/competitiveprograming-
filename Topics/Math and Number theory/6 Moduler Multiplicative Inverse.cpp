/*
A * B ≡ 1 mod M

B is the number for B if(A * B % M == 1)

A and M must be co prime 

format theorem =>

A ^ M-1 ≡ 1 % M
means,
A^M-1 % M = 1

A^M-2 ≡ A^-1 mod M (multiply with A^M-1)

A^M-2 % M  = A^-1  (formula)

example : 

A = 2
M = 5 (A and M must be co prime)

2^5-1 % 4 = 2^4 % 5 = 16 % 5 = 1

*/

#include<bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int EularbinExp(int  a , int b , int m){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a) % m;

			a = (a * 1LL * a) % m;

			b = b >> 1;
		}
	return ans;
}

int main(){

		cout<<EularbinExp(2, M-2, M);
	}


