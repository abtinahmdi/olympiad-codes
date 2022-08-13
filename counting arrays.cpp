#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll n, m;
vector<ll> v(N);
int main() 
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    cin >> n;
    set<vector<long long>> s;
    for(long long i = 0 ; i < n ; i++){
        cin >> m;
        for(long long i = 0 ; i < m ; i++) {
            cin >> v[i];
        }
        s.insert(v);
    }
    cout << s.size() << '\n';
    return 0;
}