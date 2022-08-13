//Author: ABTIN AHMADI
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], n, h, ans;
int main()
{
    cin >> n >> h;
    for (int i = 0 ; i < n ;i ++)
    {
        cin >> a[i];
        if (a[i]< h || a[i]== h)
        ans +=1;
        if (a[i]> h)
        ans += 2;
    }
    cout << ans << endl;
}