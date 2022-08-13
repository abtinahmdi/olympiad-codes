#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a, b;
ll n, k;
set <string> q;
void dfs(string s)
{
	while(s[s.length() - 1] == '0')
		s.pop_back();
	if(s.length() > 70 || q.count(s))
		return;
	q.insert(s);
	reverse(s.begin(), s.end());
	dfs(s);
	dfs(s + "1");
}
int main()
{
	cin >> n >> k;
	while(n != 0){
		a.push_back('0' + n % 2);
		n /= 2;
	}
	while(k != 0){
		b.push_back('0' + k % 2);
		k /= 2;
	}
	dfs(a);
	if(q.count(b) == true)
		cout << "YES" << '\n';
	else 
		cout << "NO" << '\n';
	return 0;
} 