#include<bits/stdc++.h>
using namespace std;

//--------------------------------------------------------------------------//



#define loop 			for(int i = 0 ; i < n; i++)


string maxSum(string w,char x[], int b[],int n){
                int alpha[72] = {0};
                for(int i = 0 ; i < n; i++){
                	int value = int(x[i] - 'A');
                	alpha[value] = i + 1;
                }
                int siz = w.size();
                int arr[siz];
                for(int i = 0 ; i < siz ;i++){
                	int value = int(w[i] - 'A');
                	if(alpha[value] == 0){
                		arr[i] = int(w[i]);
                	}
                	else{
                		arr[i] = b[alpha[value] - 1];
                	}
                }
                int sum = 0;
                int ans = INT_MIN;
                int strt = 0, start = -1 , end = -1;
                int check = -1;
                for(int i = 0 ; i < siz ; i++){
                	if(sum == 0) strt = i;
                	
                	sum += arr[i];

                	if(sum < 0){

                	
                		check = sum;

                		sum = 0;
                	}
                	else{
                		check = sum;
                	}
                	if(sum > ans){
                		check = sum;
                		
                		ans = sum;
                		start = strt;
                		end = i;
                	}

                 }
               
                string s = "";
                for(int i = start ; i <= end ;i++){
                	s.push_back(w[i]);
                }
 

                return s;

      }
signed main(){
        //in_out


        string w;
        int n;
        char x[n];
        int b[n];
        cin>>w;
        cin>>n;
        loop{
        	cin>>x[i];
        }
        loop{
        	cin>>b[i];
        }
		
		cout<<maxSum(w,x,b,n);


}

