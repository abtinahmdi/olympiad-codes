#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
	cin >> n;
    string s;
	cin >> s;
    for(int i = 0; i < n; i++){
		if(s[i] != 'L' && s[i] != 'R'){
			s[i] = s[i] ^ 'U' ^ 'D';
		} 
	}
    cout<<s;
    cout<<endl;
}
int main()
{
    int t;
	cin>>t;
    while(t--)
		solve();
}