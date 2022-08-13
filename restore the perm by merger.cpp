#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int t, n, a;
bool b[N];
void solve()
{
	cin>>n;
	for(int i = 0;i < 2 * n;i++){
		int a;
		cin >> a;
		if(b[a]==0) 
			cout << a << " ";
		b[a] = 1;
	}
	cout << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}