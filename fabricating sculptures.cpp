#include<bits/stdc++.h>
#define ll long long
#define ms(x, y) memset(x, y, sizeof x)
using namespace std;
const ll mod = 1e9 + 7;
const int N = 5e3 + 5;
ll s, b, ans, mem[N][N];
ll dp(ll s, ll b){
	if(s <= 0)
		return b == 0;
	if(b < 0 || s < 0)
		return 0;
	if(mem[s][b] != -1)
		return mem[s][b];
	ans = (2 * dp(s - 1, b) - dp(s - 2, b) + dp(s, b - s)) % mod;
	if(ans < 0)
		ans += mod;
	mem[s][b] = ans;
	return ans;
}
int main(){
	ms(mem, -1);
	cin >> s >> b;
	cout << dp(s, b - s) << '\n';
	return 0;
}
