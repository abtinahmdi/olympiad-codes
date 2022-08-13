#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
const int N = 1e6 + 5;
vector< pair<ll, ll> > v(N);
vector<ll> jav;
map <ll, ll> m1, m2;
ll t, n, m, ans, idx;
int main()
{
    cin>>t;
    while(t--){
    	cin >> n;
    	for(ll i = 0;i < n;i++){
        	cin >> v[i].f;
        	v[i].s = i + 1; 
	    }
    	sort(v.begin(), v.end(), greater<pair<ll,ll>>());
    	m = 0 + n / 2;
    	ans = 0;
    	idx = m + 1;
		for(ll i = 0;i < n;i = i + 2){
        	ans = ans + 2 * abs(idx - m) * v[i].f;
        	m2[v[i].s] = idx;
        	idx++;
    	}
    	idx = m - 1;
    	for(ll i = 1;i < n;i = i + 2){
        	ans = ans + 2 * abs(idx - m) * v[i].f;
        	m2[v[i].s] = idx;
        	idx--;
    	}
		cout << ans << endl;
    	cout << m << " ";
    	for(ll i = 1;i <= n;i++){
        	cout << m2[i] << " ";
    	}
    	cout << '\n';
    }
	return 0;
}