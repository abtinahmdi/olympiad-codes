#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, cnt, a[N];
int main()
{
	cin >> n;
	for(int i 	= 2;i <= n;i++){
		if(a[i] == 0){
			cnt++;
			for(int j = i;j <= n;j = j + i){
				a[j] = cnt;
			}
		}
	}
	for(int i = 2;i <= n;i++)
		cout << a[i] << " ";
}