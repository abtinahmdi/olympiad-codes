#include<bits/stdc++.h>
using namespace std;
int t,n,ans;
string s;
int main()
{
	cin >> t;
	while(t--)
	{
		ans = 0;
		cin >> s;
		n = s.size();
		for(int i = 0;i <= 9;i++){
			for(int j = 0;j <= 9;j++){
				int tmp = 0;
				for(int k = 0;k < n;k++)
					if(tmp % 2 == 0 && s[k] - '0' == i || tmp % 2 == 1 && s[k] - '0' == j)
						tmp++;
				if(tmp % 2 == 1 && i != j)
					tmp--;
				ans = max(ans, tmp);
			}
		}
		cout<<n - ans<<endl;
	}
	return 0;
} 
	  	 	   	  		   				   	   		