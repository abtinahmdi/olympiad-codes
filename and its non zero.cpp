#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, cnt;
ll count(int n)
{
	ll cnt = -1;
	while(n != 0){
		n /= 2;
		cnt++;
	}
	return cnt;
}
ll pwr(int x, int y)
{
	ll res = 1;
	for(int i = 1;i <= y;i++){
		res *= x;
	}
	return res;
}
void solve()
{
	ll l, r;
    cin >> l >> r;
	ll pw = count(r);
    ll ans1 = r - pwr(2, pw) + 1;
    ll ans2 = pwr(2, pw) - pwr(2, pw - 1);
    ll mx = max(ans1, ans2);
    ll ans3 = ((r - l + 1) % 2) ? ((r - l + 1) / 2 + 1) : ((r - l + 1) / 2);
    mx = max(mx, ans3);
    cout << (r - l + 1) - mx << endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}