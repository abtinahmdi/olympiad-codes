#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long mod = 998244353;
long long m_pow(long long x, long long y) {
    long long ans = 1;
    while (y > 0) {
        if (y & 1) {
            ans *= x;
            ans %= mod;
        }
        y >>= 1;
        x = x * x;
        x %= mod;
    }
    return ans;
}
long long n;
int a[300030];
vector<long long> BIT(300030);
void add(long long i, long long x) {
    while (i <= n) {
        BIT[i] += x;
        i += i & -i;
    }
}
long long csum(long long i) {
    long long count = 0;
    while (i > 0) {
        count += BIT[i];
        i -= i & -i;
    }
    return count;
}
long long sum(long long l, long long r) {
    return csum(r) - csum(l - 1);
}
vector<pair<int, int>> c;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        c.emplace_back(make_pair(a[i], i));
    }
    sort(c.begin(), c.end());
    long long now = 1;
    for (int i = 0; i < n; i++) {
        if (i != 0 && c[i - 1].first != c[i].first) {
            now++;
        }
        a[c[i].second] = now;
    }
    for (int i = 0; i < n; i++) {
        add(a[i], m_pow(2, i - 1));
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        add(a[i], -m_pow(2, i - 1));
        long long ans1 = sum(a[i], now);
        ans1 %= mod;
        ans1 *= m_pow(m_pow(2, i), mod - 2);
        ans1 %= mod;
        ans += ans1;
    }
    cout << ans % mod << endl;
}