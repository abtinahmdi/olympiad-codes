#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int a[N], t, n, k, d, l, c, x;
int main()
{
	cin >> t;
	while(t--){
		c = 0;
		vector<int> v, w;
		cin >> n >> k;
		for(int i = 0;i < n;i++){
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0;i < n;i++){
			cin >> x;
			w.push_back(x);
		}
		sort(v.begin(), v.end());
		sort(w.rbegin(), w.rend ());
		for (int i = 0;i < n;i++){
			if(i < k) 
				c += max(v[i], w[i]);
			else 
				c += v[i];
		}
		cout << c << endl;
		c = 0;
	}
}