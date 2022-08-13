#include<bits/stdc++.h>
using namespace std;
int t, n, cnt;
string s, c;
vector<int> v;
void solve()
{
	int n;
	cin >> n >> s;
	c = s;
	sort(c.begin(), c.end());
	for(int i = 0;i < n;i++) 
		cnt += (s[i] - 48);
	for(int i = 0;i < n;i++){
    	if(s[i] == '1' && i < n - cnt) 
			v.push_back(i + 1);
    	if(s[i] == '0' && i >= n - cnt) 
			v.push_back(i + 1);
	}
	if(s == c){
    	cout << "0" << '\n';
    	return;
	}
	cout << "1" << '\n' <<  v.size() << " ";
	for(auto i : v) 
		cout << i << " ";
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}