#include<bits/stdc++.h>
using namespace std;
const int N=30;
char s[20][30];
bool y[20][30];
int t,n,m,k;
int main()
{
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		for(int i = 1;i <= n;i++)
			cin >> s[i] + 1;
		for(int i = 1;i <= n;i++)
			for(int j = 1;j <= m;j++)
				y[i][j] = 0;
		for(int i = k + 1;i <= n;i++)
			for(int j = 1;j <= m;j++)
				if(s[i][j] == '*')
					for(int l = 1; ;l++)
						if(i == l || j - l <= 0 || s[i - l][j - l] == '.' ||j + l > m ||s[i - l][j + l] == '.'){
							--l;
							if(k <= l)
								for(int p = 0;p <= l;p++)
									y[i - p][j - p] = y[i - p][j + p] = 1;
							break;
						}
		int ans = 1;
		for(int i = 1;i <= n;i++)
			for(int j = 1;j <= m;j++)
				if(s[i][j] == '*' && y[i][j]==0)
					ans=0;
		cout << (ans?"YES\n":"NO\n");
	}
	return 0;
}