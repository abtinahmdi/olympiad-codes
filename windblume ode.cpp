#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int t, n, cur, sum;
void solve()
{
	cin >> n;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		ans.push_back(a);
		if(a % 2)
			cur = a;
		sum += a;
	}
	bool flag = 0;
	for(int i = 2; i * i <= sum; i++){
		if(sum % i == 0) 
			flag = 1;
	}
	int cnt = n - (!flag);
	cout << cnt << endl;
	for(int i = 0; i < n; i++){
		if(!flag && ans[i] == cur){}
		else{
			cout << i + 1<< " ";
		}
	}
}
int main()
{
	cin >> t;
	for(int i = 0;i < t;i++)
		solve();
}