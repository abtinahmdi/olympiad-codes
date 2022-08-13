#include<bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
int main()
{
	cin >> n >> s;
	for(int i = 0;i < n;i++){
		if(s[i] == 'B' && s[i] == s[i + 1] && s[i] == s[i + 2])
			s[i + 1] = 'R', cnt++;
		if(s[i] == 'B' && s[i] == s[i + 1] && s[i] != s[i + 2]){
			if(s[i + 2] == 'G')
				s[i + 1] = 'R';
			else
				s[i + 1] = 'G';
			cnt++;
		}
		if(s[i] == 'R' && s[i] == s[i + 1] && s[i] == s[i + 2])
			s[i + 1] = 'B', cnt++;
		if(s[i] == 'R' && s[i] == s[i + 1] && s[i] != s[i + 2]){
			if(s[i + 2] == 'B')
				s[i + 1] = 'G';
			else
				s[i + 1] = 'B';
			cnt++;
		}
		if(s[i] == 'G' && s[i] == s[i + 1] && s[i] == s[i + 2])
			s[i + 1] = 'R', cnt++;
		if(s[i] == 'G' && s[i] == s[i + 1] && s[i] != s[i + 2]){
			if(s[i + 2] == 'B')
				s[i + 1] = 'R';
			else
				s[i + 1] = 'B';
			cnt++;
		}
	}
	cout << cnt << '\n' << s;
}