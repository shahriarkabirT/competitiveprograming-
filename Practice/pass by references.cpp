#include<bits/stdc++.h>
using namespace std;

// void funct(int &n){		//passing reference 
// 	n++;

//  }

void func(int ar[]){
	ar[0]=1;
	ar[1]=2;
	ar[0]++;
	ar[1]--;
}


int main() {

// 	int a = 5;
// 	cout<< a <<endl; 
// 	funct(a);

// 	cout<<a;


int arr[2];
func(arr);

for(int i = 0 ; i<2; i++){
	cout<<arr[i]<< " ";
}



 
}

