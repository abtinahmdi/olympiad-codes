#include <bits/stdc++.h>
using namespace std;
int n, k, a;
int main()
{
    cin >> n >> k >> a;
    int ans = (a - 1 + k) % n;
    cout << (ans == 0 ? n : ans) << endl;
}
