#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <stack>
#include<bitset>
#include<list>
#include<cassert>
#include<numeric>
#include <stdio.h>
#include <string.h>
#include<iomanip>
#include<unordered_map>
#include<unordered_set>
#include <fstream>

using namespace std;
const long long mod = 1e9 + 7;
long long dp[2][2];
long long n;
long long a;
int main()
{
	cin >> n;
	dp[1][0] = 0;
	dp[1][1] = 3;
	a = 1;
	for (long long i = 2; i < n; i++)
	{
		dp[i % 2][0] = dp[(i - 1) % 2][1];
		dp[i % 2][1] = dp[(i - 1) % 2][0] * 3 + dp[(i - 1) % 2][1] * 2;
		dp[i % 2][0] %= mod;
		dp[i % 2][1] %= mod;
	}
	cout << dp[(n - 1) % 2][1] << endl;
}