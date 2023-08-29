class Solution {
public:
    long long EularbinExp(int  a , int b , int m){
	int ans = 1;
		while(b > 0){
			if(b&1) ans = (ans * 1LL * a) % m;

			a = (a * 1LL * a) % m;

			b = b >> 1;
		}
	return ans;
}
    int superPow(int a, vector<int>& b) {
        int number = 0 ;
		for(auto &i : b){
			number = (number * 10 + i ) % 1140 ; 
		}
		return EularbinExp(a,number,1337);
    }
};