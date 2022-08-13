#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m;
vector<int> a(N);
int main() 
{
	cin >> n >> m;
    n = min(n, m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] %= m;
    }
    vector<int> parent(m, -1), newParent(m, -1);
    for (int t = 0; t < n && parent[0] == -1; t++) {
        int v = a[t];
        copy(parent.begin(), parent.end(), newParent.begin());
        if (newParent[v] == -1) {
            newParent[v] = t;
        }
        for (int i = 0; i < p; i++) {
            if (parent[i] != -1 && parent[(i + v) % p] == -1) {
                newParent[(i + v) % p] = t;
            }
        }
        copy(newParent.begin(), newParent.end(), parent.begin());
    }
    if (parent[0] == -1) {
        puts("NO");
    }
	else {
        puts("YES");
    }
    return 0;
}
