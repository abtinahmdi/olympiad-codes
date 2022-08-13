#include<bits/stdc++.h>
using namespace std;
int n;
set<int> s;
long long pwr(long long x, long long y)
{
	long long res = 1;
	for(int i = 0;i < y;i++){
		res *= x;
	}
	return res;
}
void solve()
{
	cin >> n;
	for(int i = 1;pwr(i, 2) <= n;i++){
		s.insert(pwr(i, 2));
	}
	for(int i = 1;pwr(i, 3) <= n;i++){
		s.insert(pwr(i, 3));
	}
	cout << s.size() << '\n';
	s.clear();
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}