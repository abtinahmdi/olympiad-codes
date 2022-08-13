#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> p(N);
int t, n;
void solve()
{
	cin >> n;
	for (int i = 0;i < n;i++) 
		cin >> p[i];
	bool cmp = 1;
	for (int i = 1;i < n;i++){
		if (p[i] > p[i - 1] && p[i] != p[i - 1] + 1) 
			cmp = 0;
	}
	if(cmp)
		cout << "Yes" << '\n';
	else
		cout << "No" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}