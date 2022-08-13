#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char a[N];
char hlp[N];
int solver()
{
	int l = strlen(a);
	for (int i = 0; i < l; i++){
    for (int j = 0; j < l; j++){
    	if (a[i] == a[j] && j != i){
        	return 0;
    	}
    }
	}
	return 1;  
}
int main()
{
	int n;
	cin >> n;
	int x;
	int cnt = 0;
	for (int i = 0; i < n; i++){
    	cin >> a;
    	cnt += solver();
	}
	cout << cnt;  
}