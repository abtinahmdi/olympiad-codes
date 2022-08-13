#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, a, b, c, d, ans, i;
string s;
ll solve()
{
	cin>>s;
	for(i = 0;i < 10;i++){
		if(i & 1){
			if(s[i]=='1')	
				c++;
			if(s[i]=='?')	
				a++;
		}
		else{
			if(s[i]=='1')	
				d++;
			if(s[i]=='?')	
				b++;
		}
		if(a + c > d + (9 - i) / 2||b + d > c + (10 - i) / 2)	
			break;
	}
	cout << min(i + 1, 10) << '\n';
}
int main()
{
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}