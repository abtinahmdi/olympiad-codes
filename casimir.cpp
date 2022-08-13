#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		int freq[3]={0};
		for(int i=0;i<s.size();i++)
			freq[s[i]-65]++;
		if(freq[1]==(freq[0]+freq[2]))
			cout<<"YES\n";
		else 
			cout<<"NO\n";
	}
	return 0;
}