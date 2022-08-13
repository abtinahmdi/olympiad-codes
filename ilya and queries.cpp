#include <iostream>
using namespace std;
int main() {
    int m;
    string s;
    cin >> s;
    int n = s.size();
    int dp[n];
    int a[n];
    cin >> m;
    dp[0] = 1;
    a[0] = 1;
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
            a[i] = a[i - 1] + 1;
        }
        else
        {
            dp[i] = 0;
            a[i] = a[i-1];
        }
    }
    for(int i=0; i<m; i++)
    {
        int u, k;
        cin >> u;
        cin >> k;
        cout << a[k - 1] - a[u - 1] << endl;
    }
    
   
}