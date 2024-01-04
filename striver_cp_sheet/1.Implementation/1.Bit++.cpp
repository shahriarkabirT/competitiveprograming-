#include <iostream>
using namespace std;
 
int main()
{
    int t;
    int x=0;
    cin>>t;
    while(t--){
    string n;
    cin>>n;
    
    if(n[1]=='+'){
        x++;
    }
    else{
        x--;
    }
    }
    cout<<x;
 
    return 0;
}