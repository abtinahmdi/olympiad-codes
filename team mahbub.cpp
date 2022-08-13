#include<bits/stdc++.h>
using namespace std;
char t[105];
int n, cnt;
int main()
{
	cin >> n;
	for (int i = 1; i <= n;i++){
		cin >> t[i];
	for (int i = n; i == 1;i--){
		if (t[n - 1] == 'H')
			cnt++;
		else
			cnt--;
		}
	}
	if (cnt < 0)
		cout << "Shir e Codeup";
	if (cnt > 0)
		cout << "Shir e Hmrah e Aval";
	if (cnt == 0)
		cout << "Doost bashid";
	return 0;
}