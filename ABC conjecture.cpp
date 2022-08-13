#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, ans;
int main()
{
    cin >> n;
    for(int i = 1;i * i * i <= n;i++){
        for(int j = i;j * j * i <= n;j++){
            ll k = n / (i * j);
            ans = ans + abs(k - j + 1);
        }
    }
    cout << ans << '\n';
}
