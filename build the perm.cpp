#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll t, n, a, b, l, r, h, v, p[N];
void solve()
{
	cin >> n >> a >> b;
	l = 1, r = n;
	vector<ll> ans;
	if(a + b > n + 2 || abs(a - b) > 1)
		cout << -1 << '\n';
	else{
		if(a == b){
			h = 0, v = 0;
			ans.push_back(1);
			while(h < a){
				ans.push_back(r);
				r++;
				ans.push_back(l);
				l++;
				h++;
			}
			for(int i = l;i <= r;i++){
				ans.push_back(i);
			}
		}
		else if(a > b){
			h = 0;
			ans.push_back(l);
			l++;
			while(h < a){
				ans.push_back(r);
				r++;
				ans.push_back(l);
				l++;
				h++;
			}
			for(int i = r;i >= l;i--){
				ans.push_back(i);
			}
		}
		else{
			ans.push_back(r);
			r--;
			v = 0;
			while(v < b - 1){
				ans.push_back(l), l++;
				ans.push_back(r), r--;
				v++;
			}
			for(int i = l;i <= r;i++){
				ans.push_back(i);
			}
		}
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}