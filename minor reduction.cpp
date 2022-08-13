#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e5 + 5;
const ll mod = 1e9 + 7;
string x;
void in(){
	cin >> x;
}
void solve(){
	for(int i = x.size() - 1;i >= 0;i--){
		int n = x[i] - '0' + x[i + 1] - '0';
		if(n >= 10){
			for(int j = 0;j < i - 1;j++){
				cout << x[j];
			}
			cout << n;
			for(int j = i + 1;j < x.size();j++){
				cout << x[j];
			}
			return;
		}
	}
	cout << x[0] - '0' + x[1] - '0';
	for(int i = 2;i < x.size();i++){
		cout << x[i];
	}
	cout << '\n';
}
void out(){
}
int main(){
	int t = 1;
	cin >> t;
	while(t--){
		in(), solve(), out();
	}
}

