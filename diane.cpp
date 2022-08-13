#include<bits/stdc++.h>
using namespace std;
int t, n;
void solve()
{
	cin >> n;
	for(int i = 0;i < n / 2;i++){
		cout << "x";
	}
	cout << "y";
	for(int i = 0;i < (n / 2) - 1;i++){
		cout << "x";
	}
	if(n != 1 && n % 2 == 1){
		cout << "z";
	}
	cout << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}