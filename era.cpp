#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, n, a[N], ans;
int main() 
{
	cin >> t;
	while(t--){
		int n;
    	cin >> n;
    	for (int i = 0; i < n; i++){
        	cin >> a[i];
        	ans = max(ans, a[i] - i);
    	}
    	cout << ans - 1 << "\n";
    	ans = 0;
	}
	return 0;
}