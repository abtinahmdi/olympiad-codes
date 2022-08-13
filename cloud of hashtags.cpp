#include<bits/stdc++.h>
using namespace std;
const int N = 5e5;
string s[N];
int n;
int main()
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	for(int i = n - 1;i >= 1;i--){
		if(s[i] >= s[i - 1])
			continue;
		for(int j = 1;j < s[i - 1].size();j++){
			if(s[i][j] < s[i - 1][j]){
				s[i - 1].erase(j);
				break;
			}
		}
	}
	for(int i = 0;i < n;i++){
		cout << s[i] << '\n';
	}
	return 0;
}