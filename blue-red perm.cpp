#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k = 1;
string s;
vector<int> v, r, b;
bool ok = true;
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	for(int i = 0;i < n;i++){
		cin >> s;
		if(s[i] == 'B')
			b.push_back(v[i]);
		else
			r.push_back(v[i]);
	}
	sort(r.begin(), r.end());
	sort(b.begin(), b.end());
	for(int i = 0;i < (int)(b.size());i++){
		if(i > k)
			ok = false;
		k++;
	}
	for(int i = 0;i < (int)(r.size());i++){
		if(i > k)
			ok = false;
		k++;
	}
	ok? cout << "YES" << '\n':cout << "NO" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}