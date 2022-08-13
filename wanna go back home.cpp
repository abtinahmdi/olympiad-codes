#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
#define pll pair<ll, ll>
using namespace std;
const int N = 1e5 + 5;
const ll mod = 1e9 + 7;
int n, s, e, w;
string way;
void solve(){
	cin >> way;
	for(int i = 0;i < way.size();i++){
		if(way[i] == 'N')
			n++;
		else if(way[i] == 'S')
			s++;
		else if(way[i] == 'E')
			e++;
		else
			w++;
	}
	if((!n && s) || (n && !s) || (!e && w) || (e && !w))
		cout << "No" << '\n';
	else
		cout << "Yes" << '\n';
}
int main(){
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
}

