#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll tc, n, st;
vector<pair<ll, ll>> a(n);
void solve() 
{
    ll n;
	cin>>n;
    vector<pair<ll,ll>> a(n);
    for(ll i=0;i<n;i++){ 
		cin>>a[i].first;
		a[i].second = i;
	}
    string s;
	cin>>s;
    sort(a.begin(), a.end());
    ll st = n;
    for(ll i = n - 1;i >= 0;i--) {
        if(s[a[i].second] == '1') {
            a[i].first = st;
            st--;
        }
    }
    for(ll i = n - 1;i >= 0;i--) {
        if(s[a[i].second] == '0') {
            a[i].first = st;
            st--;
        }
    }
    for(ll i=n-1;i>=0;i--) {
        swap(a[i].first,a[i].second);
    }
    sort(a.begin(), a.end());
    for(ll i = 0;i < n;i++) 
		cout << a[i].second << " ";
    cout << '\n';
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}