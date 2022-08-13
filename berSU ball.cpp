#include<bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int a1[N], a2[N];
int b, g, ans;
int main()
{
	cin >> b;
	for (int i = 0;i < b;i++){
		cin >> a1[i];
	}
	cin >> g;
	for (int i = 0;i < g;i++){
		cin >> a2[i];
	}
	sort(a1, a1 + b);
	sort(a2, a2 + g);
	for(int i = 0,j = 0;i < b && j < g;){
		if(a1[i] - 1 > a2[j]) 
			j++;
		else if(a1[i] < a2[j] - 1) 
			i++;
		else {
			ans++;
			i++;
			j++;
		}
	}
	cout << ans << '\n';
	return 0;
}