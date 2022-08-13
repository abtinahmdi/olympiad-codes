#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e6 + 5;
ll t, n, k, a[N], sm, bg;
string s;
int main()
{
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		k = 0;
		a[0] = 0;
		for(ll i = 1;i < n;i++){
			if(s[i] == '0' && s[i - 1] == '0')
				k--;
			if(s[i] == '1' && s[i - 1] == '1') 
				k++;
			a[i] = k;
		}
		sm = *min_element(a, a + n);
		bg = *max_element(a, a + n);
		cout << bg - sm + 1 << '\n';
		for(ll i = 0;i < n;i++) 
			cout << a[i] + 1 - sm <<" ";
		cout << '\n';
	}
}
