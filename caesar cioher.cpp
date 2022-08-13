#include<bits/stdc++.h>
using namespace  std;
int main()
{
	string s,t;
	cin>>s>>t;
	set<int> st;
	for(int i = 0;i < s.size();i++){
		st.insert((t[i] + 26 - s[i]) % 26);
	}
	if(st.size() == 1)
		cout << "Yes" << '\n';
	else 
		cout << "No" << '\n';
}