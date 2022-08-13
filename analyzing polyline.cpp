#include<bits/stdc++.h>
#define ll long long
using namespace std;
set <pair<ll, ll>> s;
ll n, k, b, cnt;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> k >> b;
		if(k == 0){
			continue;
		}
		if(b == 0){
			k = 1;
		}
		else{
			ll g = __gcd(k, b);
			if(k < 0){
				k *= -1;
				b *= -1;
			}
			k /= g;
			b /= g;
		}
		if(s.find({k, b}) == s.end()){
			cnt++;
		}
	}
	cout << cnt << '\n';
}