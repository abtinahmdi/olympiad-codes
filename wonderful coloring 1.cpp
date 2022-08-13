#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int cnt[N];
int t, cnt1, cnt2;
string s;
void solve()
{
	string s;
	cin >> s;
	memset(cnt, 0, sizeof(cnt));
	for (auto c : s) 
		cnt[c - 'a']++;
	for (int i = 0; i < 26; i++)
		if (cnt[i] == 1)
			cnt1++;
		else if (cnt[i] > 0)
			cnt2++;
	cout << (cnt2 + cnt1 / 2) << endl;
}
int main()
{
	cin >> t;
	for(int i = 0;i < t;i++){
		solve();
	}
}