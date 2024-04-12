// C++ program to find 
// smallest window containing
// all characters of a pattern.
#include <bits/stdc++.h>
using namespace std;

const int no_of_chars = 256;

string findSubString(string str, string pat)
{
	int n = str.length();
	int m = pat.length();
	vector<int> hsh(256,0);
	for(int i = 0 ; i < m ; i++){
		hsh[pat[i]]++;
		//cout<<hsh[pat[i]] <<endl;
	}

	int count = 0 ,l = 0 , r = 0 , minLength = 1e9, minIndex = -1;
	while(r < n){
		if(hsh[str[r]] > 0){
			count++;
				
		} 
		hsh[str[r]]--;
	
		while(count == m){
			if(r - l + 1 < minLength){
				minLength = r - l + 1;
				minIndex = l; 
			}
			hsh[str[l]]++;
			if(hsh[str[l]] > 0){
				count--;
			}
			l++;
		}
		r++;

	}
	return minIndex==-1?"-1":str.substr(minIndex,minLength);
	
}

// Driver code
int main()
{
string s1;
cin>>s1;
string s2;
cin>>s2;
		cout<< findSubString(s1, s2) << endl;
}