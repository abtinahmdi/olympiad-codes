#include<bits/stdc++.h>
using namespace std;
int t, n, k;
string s;
void solve()
{
	cin >> n >> k >> s;
	int x = 1;
	int y = 1;
	reverse(s.begin(), s.end());
	for(int i = 0;i < (int)(s.size());i++){
		if(s[i] == 'U' && x < n)
			x++;
		if(s[i] == 'D' && x > 1)
			x--;
		if(s[i] == 'L' && y < k)
			y++;
		if(s[i] == 'R' && y > 1)
			y--;
	}
	cout << x << " " << y << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}