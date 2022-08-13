#include<bits/stdc++.h>
using namespace std;
int t, n, a, b, c, tmp;
string s;
void solve()
{
	cin >> n >> a >> b >> c;
	cin >> s;
	for(int i = 0;i < n;i++){
		if(s[i] == 'S' && a != 0){
			s[i] = 'R';
			tmp++;
			a--;
		}
		else if (s[i] == 'R' && b != 0){
			s[i] = 'P';
			tmp++;
			b--;
		}
		else if(s[i] == 'P' && c != 0){
			s[i] = 'S';
			tmp++;
			c--;
		}
		else
			s[i] == '0';
	}
	for(int i = 0;i < n;i++){
		if(s[i] != 'R' && s[i] != 'S' && s[i] != 'P'){
			if (a != 0){
				s[i] = 'R';
				a--;
			}
			else if(b != 0){
				s[i] = 'P';
				b--;
			}
			else
				s[i] = 'S';
		}
	}
	if(tmp >= (n + 1) / 2)
		cout << "YES" << '\n' << s << '\n';
	else
		cout << "NO" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}