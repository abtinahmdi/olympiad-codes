#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
const int N = 1e2 + 5;
int n, ans;
pair <int, int> gr[N];
bool adj[N][N];
bool mark[N];
void dfs(int v)
{
    if(mark[v])
        return;
    mark[v] = true;
    for(int i = 0; i < n; i++)
        if(adj[v][i])
        	dfs(i);
}

int main()
{
    cin >> n;
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        gr[i] = make_pair(x, y);
        for (int j = 0; j < i; j++){
            if(gr[j].f == x || gr[j].s == y){
                adj[i][j] = true;
                adj[j][i] = true;
            }
        }
    }
    for (int i = 0; i < n; i++){
	        if (!mark[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans - 1 << endl;
    return 0;
}