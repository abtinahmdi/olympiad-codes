#include <bits/stdc++.h>
using namespace std;
const int inf = 1001001001;
int main()
{
	int t;
	cin >> t;
	while (t--) {
    	vector<int> v(3);
    	cin >> v[0] >> v[1] >> v[2];
    	sort(v.begin(), v.end());
    	int ans = inf;
		for (int i = 0; i < 3; i++){
    		for (int j = i + 1; j < 3; j++){
    			if ((v[j] - v[i]) % 3 == 0) {
        			ans = min(ans, v[j]);
        		}
    		}
    	}
    	if (ans == inf)
    		cout << -1 << endl;
    	else
    		cout << ans << endl;
	}
	return 0;
}
