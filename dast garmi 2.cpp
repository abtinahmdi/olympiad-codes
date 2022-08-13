#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
    	cin >> a[i];
	}
	int f = 0;
	while (f < n){
    	int res = 1;
   		for (int i = 0; i < n; i++){
    		if (i != f)
        		res = res * a[i];
    	}
    	cout << res << " ";
    	f++;
	}
}