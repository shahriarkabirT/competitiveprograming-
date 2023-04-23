#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    
    cin>>t;

    while(t--){
        int l,r;
        
        cin>>l>>r;
        int maxValue=l,temp = 0;
 for(int i = l ; i <=r ;i++){

    string numStr = to_string(i);
    string::iterator minDigit = min_element(numStr.begin(), numStr.end());
    string::iterator maxDigit = max_element(numStr.begin(), numStr.end());
    char min = *minDigit;
    char max = *maxDigit;

    int Max = max - '0';
    int Min = min - '0';
    if((Max-Min)==9){
        maxValue = i ;
        break;
    }
    else if(temp<(Max-Min)){
        maxValue = i;
        temp = Max - Min;
    }
    
    }
cout<<maxValue<<endl;
}
}

