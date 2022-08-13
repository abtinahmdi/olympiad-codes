#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
const int N = 200005;
vector< pair<ll, ll> > a(N), b(N);
vector<int> poa(N), pob(N);
vector<char> mark(N, 0);
queue<int> q;
string ans;
void bfs(int x)
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		a[i].s = i;
		cin >> a[i].f;
	}
	for(int i = 0;i < n;i++){
		b[i].s = i;
		cin >> b[i].f;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0;i < n;i++){
		poa[a[i].s] = i;
		pob[b[i].s] = i;
	}
	q.push(a.back().s);
	q.push(b.back().s);
	while (!q.empty()){
		int t = q.front();
		q.pop();
		if (!mark[t]){
			mark[t] = true;
			ans[t] = '1';
			if(poa[t] + 1 < n){
				q.push(a[poa[t] + 1].s);
			}
			if(pob[t] + 1 < n){
				q.push(b[pob[t] + 1].s);
			}
		}
	}
	cout << ans << "\n";
}
int main()
{
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++){
		bfs(i);
	}
	return 0;
}