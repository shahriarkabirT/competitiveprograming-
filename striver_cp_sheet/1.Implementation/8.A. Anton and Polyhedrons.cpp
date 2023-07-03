#include<bits/stdc++.h>

using namespace std;
int main(){
    int n ;
    int t=0,c=0,o=0,d=0,y=0;
    cin>>n;
    string s;
    for(int i = 0 ; i < n; i++){    
        cin>>s;

        if(s[0] == 'T') t++;
        else if(s[0] == 'C') c++;
        else if(s[0] == 'O') o++;
        else if(s[0] == 'D') d++;
        else if(s[0] == 'I') y++;

        
    }

    int sum = 0;

    sum = t*4 + c*6 + o*8 + d*12 + y*20;


    cout<<sum<<endl;


}
