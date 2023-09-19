//https://youtu.be/Ngj48yeoNZU?si=7LQi3TCrrFMGKfbc

#include <iostream>

int stirlingSecond(int n, int k) {
    // Base cases
   	
   	if(k == 1) return 1;
   	if(n == k) return 1;


    // Recursive formula
    return k * stirlingSecond(n - 1, k) + stirlingSecond(n - 1, k - 1);
}

int main() {
    int n = 5;
    int k = 3;  // Example where n and k are both equal to n-1
    int result = stirlingSecond(n, k);
    std::cout << "S(" << n << ", " << k << ") = " << result << std::endl;
    return 0;
}