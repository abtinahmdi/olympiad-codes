#include<bits/stdc++.h>
using namespace std;
int t, n, a[30], p;
char c, b;
int main()
{
	cin >> t;
	while(t--){
		p = 1;
		memset(a, 0, sizeof a);
		cin >> n;
		for(int i = 1;i <= n; i++){
			cin >> c;
			if(b != c && a[(int)c - 'A'] == 1)
				p=0;
			a[(int)c-'A'] = 1,b = c;
		}
		cout<<(p?"YES":"NO")<<endl;
	}
	return 0;
}