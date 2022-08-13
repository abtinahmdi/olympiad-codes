using namespace std;
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <set>
#include <cctype>
#include <map>
#include <cmath>
#include <queue>
#include <algorithm>
#include <stack>
#include <cctype>
#include <cstring>
#include <string>
#include <bitset>

#define MAX 610
#define MOD 1000000007
#define PI 3.1415926535897932384
#define F first
#define S second
#define pb push_back
#define mp make_pair
typedef long long ll;

int n, k, p;
int cost[MAX];
int dp[MAX][MAX][3]; // DP[ current_gum ][ num_teeth ][ val /prev_col /cont_teeth_for_this_gum ]
vector<pair<int, int> > gum[MAX];
vector<int> res;

void solve(){

    // Initial state of DP
    memset(dp, -1, sizeof(dp));
    dp[0][0][0] = 0;

    for(int i = 1;i <= k;i++){
        int acm = cost[i]; // Initial cost of anesthesia

        for(int l = -1;l < (int)gum[i].size();l++){
            if(l != -1) acm += gum[i][l].F; // Cost of curing teeh[0, l] in gum[i]

            // Num holds the number of cured teeth
            for(int num = 0;num <= n;num++){
                if(dp[i-1][num][0] == -1) continue;

                if(l == -1){
                    dp[i][num][0] = dp[i-1][num][0];
                    dp[i][num][1] = num;
                    dp[i][num][2] = 0;
                    continue;
                }

                if(dp[i][num+l+1][0] == -1 || dp[i][num+l+1][0] > dp[i-1][num][0]+acm){
                    dp[i][num+l+1][0] = dp[i-1][num][0]+acm;
                    dp[i][num+l+1][1] = num;
                    dp[i][num+l+1][2] = l+1;
                }
            }
        }
    }

    int cur; // Cur is the number of cured teeth untill gum[i], initially i == k
    for(int i = n;i >= 0;i--){
        if(dp[k][i][0] != -1 && dp[k][i][0] <= p){ cur = i; break; }
    }


    for(int i = k;i > 0;i--){
        for(int j = 0;j < dp[i][cur][2];j++) res.pb(gum[i][j].S); // Values on answer

        // Cur receives number of teeth cured untill gum[i-1]
        cur = dp[i][cur][1];
    }

    // Print answer
    cout << res.size() << endl;
    for(int i = 0;i < res.size();i++) cout << res[i] << " \n"[i == res.size()-1];
}

int main(){
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);

    // ______________Read input:
    cin >> n >> k >> p;

    for(int i = 1;i <= k;i++) cin >> cost[i];

    for(int x, y, i = 1;i <= n;i++){
        cin >> x >> y;
        gum[y].pb(mp(x, i));
    }
    //_________________________

    // Sort values for each gum
    for(int i = 1;i <= n;i++) sort(gum[i].begin(), gum[i].end());

    solve();

    return 0;
}
