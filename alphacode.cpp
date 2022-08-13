#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e3 + 10;
ll dp[N];
char c[N];
int main()
{
	cin >> c;
	ll sz = strlen(c);
	while(true){
		if(c[0] == '0'){
			break;
		}
		dp[0] = 1;
		dp[1] = 1;
		for(int i = 2;i <= sz;i++){
			dp[i] = 0;
			char n = c[i - 2] - '0';
			char k = c[i - 1] - '0';
			if(n == 1 || (n == 2 && k <= 6)){
				dp[i] = dp[i] + dp[i - 2];
			}
			if(k){
				dp[i] = dp[i] + dp[i - 1];
			}
		}
		cout << dp[sz] << endl;
	}
	return 0;
}