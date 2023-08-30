#include <iostream>
using namespace std;

bool is_even(int n){
	if(n&1==1) return false;
	else return true;
}

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n,k,x;
        int count = 0;
        cin>>n>>k>>x;
        int sum = 0;
        if(x == 1 && k == 2 && is_even(n) == false){
        	cout<< "NO"<<endl;
        	continue;
        }
        else if(n == k && k == 1){
        	cout<< "NO"<<endl;
        	continue;
        }
        else if(k == x && x == 1){
        	cout<< "NO"<<endl;
        	continue;
        }
        else{
        	if(x!=1){
        			cout<<"YES"<<endl;
        		cout<<n<<endl;
        		while(n--){
        			cout<<1<<" ";
        		}
        	}
        	else{
        		if(is_even(n)){
        				cout<<"YES"<<endl;
        				int temp = n/2;
        			cout<<temp<<endl;
        			while(temp--){
        			cout<<2<<" ";
        			}
        		}

        		else{
        			int three = 3;
        			cout<<"YES"<<endl;
        			int temp = n/2;
        			cout<<temp<<endl;
        			while(temp--){
        				sum += three;
        				cout<<three<<" ";
        				three = 2;

        			}

        		}
        	}

  }
  cout<<endl;
        
{

}    }
	return 0;
}
