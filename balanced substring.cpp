#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	string s;
	cin>> n >> s;
	for(int i=1 ; i<n ; i++)
	{
		if(s[i] != s[i-1]){
			cout << i << " " << i+1 << endl;
			return;
		}
	} 
	cout<<"-1 -1\n";
}
int main()
{
	int T;
	cin >> T;
	while(T--)
		solve();
	return 0; 
}