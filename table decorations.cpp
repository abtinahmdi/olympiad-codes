#include<bits/stdc++.h>
using namespace std;
long long a[5], ans;
int main()
{
	for(int i = 0;i < 3;i++){
        cin >> a[i];
	}
	sort(a, a + 3);
	if(a[2] > 2 * (a[1] + a[0]))
        a[2] = 2 * (a[1] + a[0]);
    ans = (a[0] + a[1] + a[2]) / 3;
    cout << ans;
	return 0;
}
