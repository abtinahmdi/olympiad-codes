#include<bits/stdc++.h>
using namespace std;
int t, n;
string s;
void solve()
{
	cin >> n;
	vector<int> v1, v2, v3;
	for(int i = 0;i < n;i++){
		cin >> v1[i];
	}
	cin >> s;
	for(int i = 1;i <= n;i++){
		if(s[i] == 'B')
			v2.push_back(v1[i]);
		else
			v3.push_back(v1[i]);
	}
	sort(v2.begin(), v2.end());
	sort(v3.begin(), v3.end());
	int ok = 1;
	int check = 1;
	for(int i = 0;i < v2.size();i++,check++){
		if(v2[i] < check)
			check = 0;
	}
	for(int i = 0;i < v2.size();i++,check++){
		if(v3[i] > check)
			check = 0;
	}
	if(check != 0)
		cout << "YES" << '\n';
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