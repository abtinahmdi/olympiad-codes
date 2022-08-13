#include<bits/stdc++.h>
using namespace std;
int t;
string s;
void in(){
	cin >> s;
}
void solve(){
	sort(s.begin(), s.end());
}
void out(){
	cout << s << '\n';
}
int main(){
	cin >> t;
	while(t--){
		in(), solve(), out();
	}
}

