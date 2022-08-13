#include<bits/stdc++.h>
#include<stack>
using namespace std;
stack<int> stk;
stack<int> stk2;
int n;
int ans = 1;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		int x = 1;
		while (stk.size() && stk.top() >= tmp){
			if (tmp == stk.top())
				x += stk2.top();
			ans = max(ans, x);
			stk.pop();
			stk2.pop();
		}
		stk.push(tmp);
		stk2.push(x);
	}
	cout << ans << endl;
	return 0;
}