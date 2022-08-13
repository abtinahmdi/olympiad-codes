#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n, a[N];
bool cmp = true;
void solve()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		bool f = false;
		for(int j = i + 1;j >= 2;j--){
			if(a[i] % j == 0)
				f = true;
				break;
		}
		cmp &= f;
	}	
	cmp? cout << "YES" << '\n': cout << "NO" << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}