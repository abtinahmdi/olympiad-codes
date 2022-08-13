#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3e5 + 7;
char c[N][20], s[N];
ll n, jav[N], javn;
void calc()
{
	for(int i = 0;i < n;i++)
		for(int j = 0;j < 9;j++){
			cin >> c[i][j];
			if(c[i][j] == s[i]){
				jav[i] = j;
			}
		}
}
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	calc();
	for(int i = 0;i < n;i++){
		javn += min(jav[i], 9 - jav[i]);
	}
	cout << javn << '\n';
}