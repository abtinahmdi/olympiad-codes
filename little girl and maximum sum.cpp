#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
const int R = 440;
int a[N];
int cnt[N];
int cnt2[N];
int n, q;
vector<int> v;
int main()
{
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < q; i++){
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		if (r - l >= R){
			while (l % R != 0){
				cnt[l]++;
				l++;
			}
			while (r % R != R - 1){
				cnt[r]++;
				r--;
			}
			for (int i = l / R; i <= r / R; i++){
				cnt2[i]++;
			}
		}
		else{
			for (int i = l; i <= r; i++){
				cnt[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		v.push_back(cnt[i] + cnt2[i / R]);
	}
	long long ans = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++){
		ans += 1ll * v[i] * a[i];
	}
	cout << ans << endl;
} 