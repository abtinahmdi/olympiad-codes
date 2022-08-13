#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, q, k, cnt;
string s, c;
int main()
{
	cin >> n >> q;
	cin >> s;
	for(int i = 0;i < q;i++){
		cin >> k >> c;
	}
	while(q--){
		s.replace(s.begin() + k - 1, s.begin() + k, c);
		for(int i = 0;i < n;i++){
			if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c'){
				s.replace(s.begin() + i - 1,s.begin() + i, "b");
				cnt++;
			}
		}
		cout << cnt << '\n';
		cnt = 0;
	}
}