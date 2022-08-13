//11111011111101010101
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, k, a[5][1001], c[5][1001], d[1001], i, j, h, res = 0;
	cin >> n >> k;
	for(i = 0;i < k;i++)
		for(j = 1; j <= n;j++){
			cin >> a[i][j];
			c[i][a[i][j]] = j;
		}
	for(i = 1;i <= n;i++){
		for(j = 1;j < i;j++){
			for(h = 1;h < k ;h++)
				if (c[h][a[0][j]] > c[h][a[0][i]])
					break;
			if(h == k && d[j] > d[i]) 
				d[i] = d[j];
		}	
		d[i]++;
		if(res < d[i]) 
			res = d[i];
	}	 
	cout << res;
	return 0;
}