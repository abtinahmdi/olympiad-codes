#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], b[N];
int t, n;
void solve()
{
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for(int i = 0;i < n;i++){
        if(b[i] > a[i] + 1 || b[i] < a[i]){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}
int main()
{
    cin >> t;
    while(t--){
        solve();
    }
}
