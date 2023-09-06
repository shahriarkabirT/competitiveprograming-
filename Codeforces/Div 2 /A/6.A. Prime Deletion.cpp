void solve(){
	string s,res;
	cin>>s;
	res.push_back(s[0]);
	//res.push_back(s[1]);
	int flag =  0;
	for(int i = 1 ; i < s.size() ; i++){
		res[1] = s[i];
		int res1 = stoi(res);
		if(is_prime(res1)){
			cout<<res1<<endl;
			flag = 1;
			break;
		}

	}
	if (flag == 0) cout<<-1<<endl;
}