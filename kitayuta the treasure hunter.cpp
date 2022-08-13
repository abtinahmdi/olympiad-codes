#include<bits/stdc++.h>
using namespace std;
int n,d,x;
int a[30005],dp[30005][505];
bool mark[30005][505];
int fdp(int i,int j)
{
	int jj = j - (d - 250), ans;
	if(i >= 30001)
		return 0;
	if(mark[i][jj]) 
		return dp[i][jj];
	mark[i][jj] = true;
	if(j == 1){
		ans = a[i] + max(fdp(i + j, j), fdp(i + j + 1, j + 1));
	}
	else{
		ans = a[i] + max(fdp(i + j - 1, j - 1), max(fdp(i + j, j), fdp(i + j + 1, j + 1)));
	}
	dp[i][jj] = ans;
	return ans;
}
int main(){
	cin >> n >> d;
	for(int i = 0;i < n;i++){
		cin >> x;
		a[x]++;
	}
	cout << fdp(d, d);
}