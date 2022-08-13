#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 6;
int n, m, u, v, gr[N];
int main(){
	cin >> n >> m;
	for(int i = 0;i < m;i++){
		cin >> u >> v;
		gr[u]++;
		gr[v]++;
	}
	for(int i = 1;i <= n;i++){
		if(gr[i] & 1){
			cout << "NO" << '\n';
			return 0;
		}
	}
	puts("YES");
}
