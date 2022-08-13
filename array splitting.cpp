#include<bits/stdc++.h>
#define ll long long
#define FAST std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
vector<ll> ans;
vector<ll> v1;
ll n, k, x, mx;
int main()
{
    FAST;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (i > 0)
			ans.push_back(x - v1.back());
		v1.push_back(x);
	}
	mx = v1.back() - v1[0];
	sort(ans.begin(), ans.end());
	reverse(ans.begin(), ans.end());
	for (int i = 0; i < k - 1; i++) {
		mx -= ans[i];
	}
	cout << mx;
	return 0;
}