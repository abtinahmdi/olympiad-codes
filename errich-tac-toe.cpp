#include <bits/stdc++.h>
using namespace std;
const int N = 3e2 + 5;
string s[N];
int t, n, val;
void solve()
{
	cin >> n;
	int cnt[3] = {0, 0, 0};
	for(int i = 0; i < n; i++){
		cin >> s[i];
		for(int j = 0; j < n; j++){
	    	if(s[i][j] == 'X')
	    		cnt[(i + j) % 3]++;
	    }
	}
	val = min_element(cnt, cnt + 3) - cnt;
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < n; j++){
	    	if(s[i][j] == 'X' && (i + j) % 3 == val)
	    		s[i][j] = 'O';
	    }
    	cout << s[i] << '\n';
	}
}
int main() 
{
	cin >> t;
	while(t--){
		solve();
	}
}