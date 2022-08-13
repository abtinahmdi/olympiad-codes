#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e4 + 5;
char a[N], b[N], c[N], s[N];
int n, x;
int main()
{
	cin >> a;
	n = strlen(a);
	for (int i = 0; i < n; i++){
		b[i] = a[i];
	}
	b[n] = '0';
	b[n + 1] = '0';
	b[n + 2] = '0';
	b[n + 3] = '0';
	n = strlen(b);
	for (int i = n - 1; i >= 0; i--){
		if (b[i] == '0' && a[i - 4] == '0' && c[i] != '1'){
			s[i] = '0'; 
		}
		if (b[i] == '0' && a[i - 4] == '0' && c[i] == '1'){
			s[i] = '1';
		}
		if (b[i] == '1' && a[i - 4] == '0' && c[i] != '1'){
			s[i] = '1';
		}
		if (b[i] == '0' && a[i - 4] == '1' && c[i] != '1'){
			s[i] = '1';
		}
		if (b[i] == '1' && a[i - 4] == '0' && c[i] == '1'){
			s[i] = '0';
			c[i - 1] = '1';
		}
		if (b[i] == '0' && a[i - 4] == '1' && c[i] == '1'){
			s[i] = '0';
			c[i - 1] = '1';
		}
		if (b[i] == '1' && a[i - 4] == '1' && c[i] != '1'){
			s[i] = '0';
			c[i - 1] = '1';
		}
		if (b[i] == '1' && a[i - 4] == '1' && c[i] == '1'){
			s[i] = '1';
			c[i - 1] = '1';
		}
		if (i < 4){
			if (b[i] == '1' && c[i] == '1'){
				c[i - 1] = '1';
				s[i] = '0';
			}
			if (b[i] == '1' && c[i] != '1'){
				s[i] = '1';
			}
			if (b[i] == '0' && c[i] == '1'){
				s[i] = '1';
			}
			if (b[i] == '0' && c[i] != '1'){
				s[i] = '0';
			}
		}
		if(i == 0 && b[0] == '1' && c[0] =='1'){
			cout << "1";
		}
	}
	for (int i = 0; i < n; i++){
			cout << s[i];
	}
}