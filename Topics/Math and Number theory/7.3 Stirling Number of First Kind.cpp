#include <iostream>
using namespace std;
const int N = 1e5 + 7;


int factorial(int n){
	int fact[n+1];
	fact[0] = 1;
	fact[1] = 1;

	for(int i = 2 ; i <= n; i++){
		fact[i] = fact[i-1] * i;
	}
	return fact[n];
}

int stirlingFirst(int n, int k){
	if(n == 1 && k == 1) return 1;
   	if(k == 0) return 0;
   	if(k == 1) return factorial(n-1);
   	if(n == k) return 1;



    // Recursive formula
    return (n-1) * stirlingFirst(n - 1, k) + stirlingFirst(n - 1, k - 1);
}

int main() {
    int n = 4;
    int k = 2;  // Example where n and k are both equal to n-1
    int result = stirlingFirst(n, k);
    std::cout << "S(" << n << ", " << k << ") = " << result << std::endl;
    return 0;
}