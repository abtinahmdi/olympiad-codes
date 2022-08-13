#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fir first
#define sec second
#define ms(x) memset(x, 0, sizeof x)
using namespace std;
const int N = 2e5 + 7;
vector<int> gr[N];
ll n, a[N], b[N], dis[N];
bool mark[N];
queue<int> q;
void bfs(int v)
{
	for (int i = 0; i < n; i++){
		if(a[i] % 2 == v){
			q.push(i);
			b[i] = 0;
			mark[i] = true;
		}
	}
	int x;
	while(q.size()){
		x = q.front();
		q.pop();
		mark[x] = true;
		for (auto u: gr[x]){
			if(!mark[u]){
				b[u] = b[x] + 1;
				mark[u] = true;
				q.push(u);
				if(a[u] % 2 != v) 
					dis[u] = (b[u]);
			}
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if(i >= a[i]) 
			gr[i - a[i]].pb(i);
		if(i + a[i] < n) 
			gr[i + a[i]].pb(i);
	}
	bfs(1);
	ms(mark);
	ms(b);
	bfs(0);
	for(int i = 0; i < n; i++){
		if(dis[i] == 0) 
			cout << "-1 ";
		else
			cout << dis[i] << " ";
	}
}