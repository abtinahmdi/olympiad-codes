#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
const int N = 1e5 + 5;
string s;
int main()
{
	cin >> n >> m;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < m;j++){
			cin >> s;
			if (s == "C" || s == "M" || s == "Y")
				cnt++;
		}
	}
	if (cnt > 0)
		cout << "#Color" << endl;
	else
		cout << "#Black&White" << endl;
	return 0;
}