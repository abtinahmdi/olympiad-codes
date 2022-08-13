#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n, a, tmp1, tmp2;
void solve()
{
    cin >> n;
    tmp1 = 1;
    for(int i = 0;i < n;i++){
        cin >> a;
        if(a != i && tmp1 == 1)
            tmp2++;
        tmp1 = a;
    }
    cout << tmp2 << '\n';
}
int main()
{
    cin >> t;
    while(t--){
        solve();
    }
}
