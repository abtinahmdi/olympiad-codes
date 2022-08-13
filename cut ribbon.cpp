#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio, cin.tie(0), cout.tie(0);
	int n, a, b, c, d = 1, e;
	cin >> n >> a >> b >> c;
	for(int i = 0;i <= 4000; i++)
		for(int j = 0;j <= 4000; j++){
			e = n - a * i - b * j;
			if(e >= 0 && e % c == 0)
				d = max(d, i + j + e / c);
		}
	cout << d;
}