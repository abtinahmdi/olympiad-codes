#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int p[N],q[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++){
        int tmp;
        cin >> tmp;
        q[tmp] = i;
    }
    for (int i = 1;i <= n;i++){
        cout << q[i] << " ";
    }
}