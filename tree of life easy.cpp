#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int N = 1e5 + 5;
ll n, x, y, ans, tmp;
vector<ll> gr[N];
bool mark[N];
int main()
{
	cin >> n;
	for(int i = 1;i < n;i++){
		cin >> x >> y;
		gr[x].pb(y);
		gr[y].pb(x);
	}
	for(int i = 1;i <= n;i++){
		ans = ans + (gr[i].size() * (gr[i].size() - 1)) / 2;
	}
	cout << ans << '\n';
}