#include<iostream>
using namespace std;
int main()
{
	int n, ans=0;
	cin >> n;
    long long a[100000],b[100000];
    for(int i= 0; i <= n-1; i ++){
        cin >> a[i] >> b[i];
    }
    for(int i=0 ; i<=n-1; i ++){
        for(int j=0;j <= n-1; j ++){
            if(i != j && a[i] == b[j])
                ans++;
        }
    }
    cout << ans << endl;
}