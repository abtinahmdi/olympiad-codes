#include<bits/stdc++.h>
using namespace std;
const int N = 5e2 + 5;
int t, n, x, ans, a[N];
void solve()
{
	cin >> n >> x;
    for(int i = 0;i < n;i++)
        cin >> a[i];
	while(is_sorted(a, a + n) == false){
        bool ok = false;
        for(int i = 0;i < n;i++){
            if(a[i] > x){
                ++ans;
                swap(a[i], x), ok = true;
                break;
            }
        }
        if(!ok){
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
    ans = 0;
    return;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}