#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
vector<ll> v(N);
ll t, n, x, tmp, cmp1, s;
int main()
{
	cin >> t;
	while(t--){
		cin >> n >> x;
		for(ll i = 0;i < n;i++){
			cin >> tmp;
			v.push_back(tmp);
			if(tmp == x) 
				cmp1++;
			s += tmp;
		}
    	if(cmp1 == n) 
			cout << 0 << endl;
		else if(s == x * n||cmp1 >= 1)
			cout << 1 << endl;
		else 
			cout << 2 << endl;
	}
}