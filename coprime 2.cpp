#include <bits/stdc++.h>
#include <vector>
using namespace std;
void update(int x, int m, vector<int> &b) 
{
	if (x == 1 || x > m || b[x] != 0){
    	return;
	}
	for (int i = x; i <= m; i += x){
    	b[i] = 1;
	}
}
int main() 
{
	int n, m;
	int a;
	cin >> n >> m;
	vector<int> b(m + 1);
	b[0] = 1;
	for (int i = 0; i < n; i++) {
    	cin >> a;
    	for (int j = 2; j * j <= a; j++) {
    		while (a % j == 0) {
        		update(j, m, b);
    			a /= j;
    		}
    	}
    	if (a != 1)
    		update(a, m, b);
	}
	cout << count(b.begin(), b.end(), 0) << endl;
	for (int i = 1; i <= m; i++){
    	if (b[i] == 0)
    		cout << i << std::endl;
	}
	return 0;
}