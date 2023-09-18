#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    
    double left = 1 ;
    double right = 1 ;
        
        int r1 = n;
        int r2 = n + 1;
        int ans ;
          for(int i = 1; i <= r1; i++){
            left = left * ((2 * n) - r1 + i) / i;
            }
        
         for(int i = 1; i <= r2; i++){
            right = right * ((2 * n) - r2 + i) / i;
            }
      ans = left - right;
     cout << ans;

    return 0;
}