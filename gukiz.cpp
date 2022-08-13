#include<iostream>
using namespace std;
int main()
{
    int n, i, j, u, a[10000];
	cin >> n;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	for(i = 1;i <= n; i++){
		u = 1;
		for(j = 1;j <= n; j++)
			if(a[i] < a[j])
				u++;
		cout << u << " ";
	}
	return 0;
}