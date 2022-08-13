#include<bits/stdc++.h>
#define l long long
using namespace std;
const int N = 1e5;
l n, m, a[N];
bool cmp(l n,l k)
{
    int x = abs(m + 1 - 2 * n);
    int y = abs(m + 1 - 2 * k);
    if(x != y)
        return x < y;
    return n < k;
}
int main()
{
    cin >> n >> m;
	for(int i = 1;i <= m;i++){
		a[i] = i;
	}
	sort(a + 1, a + m + 1, cmp);
	a[0] = m;
	for(int i = 1;i <= n;i++){
		cout << a[i % m] << endl;
	}
	cout << endl;
}