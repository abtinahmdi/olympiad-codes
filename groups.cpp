#include<bits/stdc++.h>
using namespace std;
int arr[1005][5];
int main()
{
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1;i <= n;i++)
			for(int j = 0;j < 5;j++)
				cin >> arr[i][j];
		bool ans = 0;
		for(int i = 0;i < 5;i++)
			for(int j = i + 1;j < 5;j++){
				int a = 0,b = 0,c = 0;
				for(int k = 1;k <= n;k++){
					bool f1 = arr[k][i], f2 = arr[k][j];
					if(f1)
						a++;
					if(f2)
						b++;
					if(f1&&f2)
						c++;
				}
				a -= c;
				b -= c;
				if(a + b + c != n || a > n / 2 || b > n / 2)
					continue;
				ans = 1;
			}
		if (ans)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	return 0;
} 