#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e5 + 5;
const ll mod = 1e9 + 7;
ll t, n, m, r, c, res;
char s;
bool b = false;
void in(){
}
void solve(){
	cin >> n >> m >> r >> c;
	res = 2;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> s;
			if(s == 'B'){
				b = true;
				if(i == r)
					res = min(res, 1LL);
				if(j == c)
					res = min(res, 1LL);
				if(i == r && j == c)
					res = 0;
			}
		}
	}
	if(!b)
		cout << "-1" << '\n';
	else
		cout << res << '\n';
}
void out(){
}
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		in(), solve(), out();
	}
}

