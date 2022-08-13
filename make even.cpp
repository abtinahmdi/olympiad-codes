#include<bits/stdc++.h>
using namespace std;
string s;
int n, k, ans;
int main()
{
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		int l = s.size();
		if(int(s[l - 1] - 48) % 2 == 0){
			cout << 0 << '\n';
			continue;
		}
		if(int(s[0] - '0') % 2 == 0){
			cout << 1 << '\n';
			continue;
		}
		k = -1;
		for(int i = 0;i < l;i++){
			if(int(s[i] - 48) % 2 == 0){
				k = 2;
				break;
			}
		}
		cout << k << '\n';
	}
	return 0;
}