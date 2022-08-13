#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n, a;
set<int> s;
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		s.insert(a);
	}
	cout << s.size() << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}