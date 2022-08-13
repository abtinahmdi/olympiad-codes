#include<bits/stdc++.h>
using namespace std;
int t, ans;
string s;
int main(){
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> s;
		if(s == "X++" || s == "++X")
			ans++;
		else
			ans--;
	}
	cout << ans << '\n';
}
