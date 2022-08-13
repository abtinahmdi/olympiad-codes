#include<bits/stdc++.h>
using namespace std;
int t, a, b, c;
void solve()
{
	cin >> a >> b >> c;
	if((a + b + c) % 3)
		cout << "1" << '\n';
	else
		cout << "0" << '\n'; 
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}