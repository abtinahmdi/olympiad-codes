#include<bits/stdc++.h>
using namespace std;
char a[105];
int main()
{
	int i, x, s = 0;
	cin >> a;
	x = strlen(a);
	for (i = 0; i < x - 1 ; i++){
		if (a[i] == a[i + 1]){
			s++;
		}
		if (s >= 6){
			cout << "YES";
			break;
		}  
		if (a[i] != a[i + 1]){
			s = 0;
		}
	}
	if (s >= 0 && s < 6){
		    cout << "NO";
	}
}