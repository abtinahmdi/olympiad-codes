#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int maxx,minx;
int a[N];
void solve()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i == 0){
			minx = maxx = i;
			continue;
		}
		if(a[i] > a[maxx])
			maxx = i;
		if(a[i] < a[minx])
			minx = i;
	}
	minx++,maxx++;
	int m1 = max(minx,maxx);
	int m2 = min(minx,maxx);
	cout << min({m1,n-m2 + 1,m2 + n - m1+1}) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
