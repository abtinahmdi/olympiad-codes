#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6 + 5;
const ll INF = 1e17;
ll t, w, h, k, mx, mn, x[N];
void solver()
{
	cin >> w >> h;
	for(int i = 1; i <= 4; i++){
		x[i] = 0;
		mn = INF, mx = 0;
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> x[0];
			mx = max(x[0], mx);
			mn = min(x[0], mn);
		}
		x[i] = abs(mx - mn);
	}
	cout << max({x[1] * h , x[2] * h , x[3] * w , x[4] * w}) << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solver();
	}
}