#include <iostream>
using namespace std;
int main() {
        int n = 5;
        int r = 2;
        double sum = 1;
  // Calculate the value of n choose r using the binomial coefficient formula
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        cout<<(int)sum<<endl;
 
    return 0;
}