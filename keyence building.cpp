#include<bits/stdc++.h>
using namespace std;
int t, n, ans;
int main()
{
    cin >> t;
    for(int j = 0;j < t;j++){
        cin >> n;
        for(int i = 1;i <= 1000;i++){
            int k = n - 3 * i;
            int l = i * 4 + 3;
            if(k % l == 0 && 1 <= k / l){
                ans--;
                break;
            }
        }
        ans++;
    }
    cout << ans << '\n';
}
