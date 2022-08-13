#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
char a[N],c[N];
int main()
{
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int n, ans = 0;
		cin >> n >> c >> (a + 1);
		for (int i = 1;i <= n;i++){
			ans = i;
			for(int j = i;j <= n;j += i)
				if(a[j] != c[0])
					ans = 0;
			if(ans)
				break;
		}
		if(ans==1)
			puts("0");
		else if(ans>1)
			printf("1\n%d\n",ans);
		else 
			printf("2\n%d %d\n",n-1,n);
	}
	return 0;
}
