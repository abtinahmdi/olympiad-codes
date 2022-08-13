#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll k, n;
vector<int>v(n,1);
string s;
int main()
{
	cin>>k;
	s = "codeforces";
	n = s.size();
	ll tmp = 1;
	for(int i = 0;tmp < k;i = (i + 1) % n){
		tmp = (tmp * (v[i] + 1)) / v[i];
		v[i]++;
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < v[i];j++){
			cout << s[i];
		}
	}
}