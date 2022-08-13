#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, h, cnt = 0;
    cin >> n >> m >> h;
    int *a = new int[m + 1];
    for(int i = 1;i <= m;i++){
		cin >> a[i];
		cnt += a[i];
	}
    n--;
	a[h]--;
	cnt--;
    if(n > cnt)
		cout << -1;
    else{
        double ans=1.0;
        long long tmp = cnt - a[h];
        while(cnt > tmp){
			ans *= (cnt - n)/(cnt * 1.0); 
			cnt--;
		}
        cout<<1.0-ans;
    }
}
