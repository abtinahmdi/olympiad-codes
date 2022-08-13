#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int s[N], diff[N], t, a, b, cnt, tmp;
void solve()
{
	cin >> a >> b;
	for(int i = 0; ;i++){
		diff[i] = abs(a - b);
		a = b;
		b = diff[i];
	}
    for(int i = 0; ; i++){
        for(tmp = i + 1; ; tmp++){
            if(diff[i] == diff[tmp] ){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << '\n';
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}