#include<bits/stdc++.h>
using namespace std;
const int N = 1e8 + 5;
const int M = 1e6 + 5;
int a[N];
int cnt[M];
int n;
int main()
{
	cin >> n;
	for (int i = 0; i < n;i++)
		cin >> a[i];
	for (int i = 0; i < n;i++)
		cnt[a[i]]++;
	int tmp = 0;
	for (int i = 0;i < M;i++){
		for (int j = 0;j < cnt[i]; j++){
			a[tmp]= i;
			tmp++;
		}
	}
}