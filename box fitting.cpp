#include<bits/stdc++.h>
#define ll long long
#define ms multiset
using namespace std;
ll t, n, W, a, kl, high;
ms<ll> m;
void solve()
{
	cin>>n>>W;
	for(int i = 0;i < n;i++){
		cin >> a;
		m.insert(a);
	}
	high = 1;
	while(!m.empty()){
		auto it = m.upper_bound(kl);
		if(it != m.begin()){
			it--;
			kl -= *it;
			m.erase(it);
		}
		else{
			kl = W;
			high++;
		}
	}
	cout << high - 1 << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}