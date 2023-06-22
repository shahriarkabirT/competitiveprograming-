 #include <bits/stdc++.h>
using namespace std;

void print (map <int,string> &m){
	cout<< m.size() << endl;

	for(auto &pr : m){
		cout<<pr.first << " " <<pr.second << endl;
	}
}

int main() {
	map < int , string > m ;

	m[1] = "abc";
	m[5] = "cdc";
	m[3] = "adc";

	auto it = m.find(3);
	m.erase(5);
	if(it == m.end()){
		cout<<"NO value availble";
	}
	else{
		cout<<(*it).first << " " <<(*it).second;
	}
   	print(m);


 //   m.clear();
}