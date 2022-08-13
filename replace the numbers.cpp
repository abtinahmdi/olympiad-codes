#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 7;
int q, n, t, x, y;
vector<int> a[N];
void solve()
{
	cin >> t;
	if(t == 1){
		cin >> x;
		a[x].push_back(n++);
	}
	else{
		cin >> x >> y;
		if (x != y){
			if (a[x].size() > a[y].size()) 
				a[x].swap(a[y]);
			for (int i : a[x]) 
				a[y].push_back(i);
			a[x].clear();
		}
	}
}
int main()
{
	cin >> q;
	while(q--){
		solve();
	}
	vector<int> ans(n);
	for (int i = 0; i < N; ++i)
		for (int j : a[i])
			ans[j] = i;
	for (int i : ans) 
		cout << i << " ";
}