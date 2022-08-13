#include<bits/stdc++.h>
using namespace std;
int t, n, k, a, o;
void solve()
{
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a;
    	if(a % 2)
    		o++;
	}
	if(o >= 1 && !(k == n && o % 2 == 0) && !(o == n && k % 2 == 0))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}