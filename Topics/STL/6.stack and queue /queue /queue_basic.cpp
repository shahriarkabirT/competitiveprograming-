#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int>	q;

	q.push(5);
	q.push(7);
	q.push(10);

	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
        
	}
} 
