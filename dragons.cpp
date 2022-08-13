#include<iostream>
using namespace std;
int a, b, c[10000], m, n, s;
int main()
{
	cin >> s >> n;
	for(int i = 1;i <= n; i++){
		cin >> a >> b;
		c[a] += b;
		if(m < a)
			m = a;
	}
	for(int i = 1;i <= m; i++)
		if(s > i)
			s = s + c[i];
		if(s > m)
			cout << "YES";
		else 
			cout << "NO";
}