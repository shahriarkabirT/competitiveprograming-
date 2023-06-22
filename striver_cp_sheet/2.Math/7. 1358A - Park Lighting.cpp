#include <iostream>

using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int mul = n*m;
        
        if(mul % 2 == 0) cout << mul/2<<endl;
        else cout<<mul/2+1<<endl;
    }
}
