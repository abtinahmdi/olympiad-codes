#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 1e17;
ll t, n, res, c, sto;
vector<int> v(n);
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	res = INF;
	for(int i = 0;i < 4;i++)
		for(int j = 0;j < 4;j++){
			for(int p = 0;p < n;p++){
				sto = INF;
				for(int ti = 0;ti <= i;ti++){
					for(int tj = 0;tj <= j;tj++){
						int x = v[p] - ti - 2 * tj;
						if(x >= 0 && x % 3 == 0)
							sto = min(sto, x / 3 * 1LL);
					}
				}
				c = max(c, sto);
			}
			res = min(res, i + j + c);
		}
	cout << res << '\n';
}
int main()
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while(t--){
		solve();
	}
}