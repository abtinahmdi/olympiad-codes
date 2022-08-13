#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int t, a[N];
void solve()
{
	int s1[7];
	for(int i = 0;i < 7;i++){
		cin>>s1[i];
	}
	int arrs[3];
	for(int i = 0;i < 3;i++){
		if(i==0 || i==1){
			arrs[i] = s1[i];
		}
		else{
			if(s1[i] != (arrs[0] + arrs[1])){
				cout << arrs[0] << " " << arrs[1] << " " << s1[i] << '\n';
				return;
			}
			else{
				cout << arrs[0] << " " << arrs[1] << " " << s1[3] << '\n';
				return;
			}
		}
	}
}
int main()
{
	cin >> t;
	while(t--){
		solve();
	}
}