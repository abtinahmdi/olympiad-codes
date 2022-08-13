#include<bits/stdc++.h>
using namespace std;
long long n, i, j, k, cnt, a, b;
string s;
int main()
{
	cin >> n >> k >> s;
	for(int i = 0;i < n;i++){
		if(s[i]=='a') 
			a++;
		else
			b++;
		while(min(a,b)>k){
			if(s[j]=='a')
				a--;
			else 
				b--;
			j++;
		}
		cnt = max(cnt, a + b);
	}
	cout<<cnt;
}