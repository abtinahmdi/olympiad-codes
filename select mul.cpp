#include<bits/stdc++.h>
 
using namespace std;

int T;
int n,m;
int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	int ans = 0;
	do{
		for(int i = 0;i < s.size(); i++) 
		{
			int  l = 0,r = 0; 
			for(int j = 0;j < i;j ++) l = l * 10 + s[j] - '0';
			for(int j = i;j < s.size();j ++) r = r * 10 + s[j] - '0';
			ans = max(ans,l * r);
		}
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans;
    return 0;
}