#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	int ans=0;
	cin >> s;
	int n=s.size();
	for( int i = 0 ; i < s.size(); i ++){
		if(s[i]>=65&&s[i]<=92)
			ans++;
	}
	if(ans==n){
		for(int i = 0;i<n;i++){
			s[i]+=32;
		}
	}
	else if(ans==n-1&&s[0]>=97&&s[0]<=122){
		s[0]-=32;
		for(int i = 1 ; i < n ; i ++){
			s[i]+=32;
		}
	}
	cout << s << endl;
}