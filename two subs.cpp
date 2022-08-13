#include<bits/stdc++.h>
using namespace std;
int t, n, k;
string s;
void solve()
{
	cin >> s;
	string c(s);
    sort(c.begin(),c.end());
    char c1 = c[0];
    for(int i = 0;i < s.size();i++){
    	if(s[i] == c1){
        	s.erase(s.begin() + i);
        	break;
    	}
    }
    cout << c1 << " " << s << endl;
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}