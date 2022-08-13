#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<int> v;
string s;
int in, t, ans, dp[N];
int main() 
{
	cin >> s;
	s = ")" + s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '('){
			v.push_back(i);
			continue;
		}
		if (!v.size()){
			v.push_back(i);
			dp[i] = 0;
		}
		if (s[v.back()] == '('){
			int t = dp[v.back()]; 
			v.pop_back();
			dp[v.back()] += t + 1; 
			ans = max(ans, dp[v.back()]);
		}
		else{
			dp[i] = 0;
			v.push_back(i);
		}
	}
	for (int i = 0; i < s.size(); i++)
		if (dp[i] == ans)
			in++;
	if (ans == 0)
		in = 1;
	cout << ans * 2 << " " << in << endl;
}