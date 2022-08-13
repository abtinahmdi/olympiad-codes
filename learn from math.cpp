#include<bits/stdc++.h>
using namespace std;
bool prime(int n) 
{
    bool isPrime = true;
    if (n == 0 || n == 1) 
	{
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) 
		{
            if (n % i == 0) 
			{
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
int main()
{
	int n;
	cin >> n;
	int ans = 0, jav = 0;
	if (n % 2 == 0)
	{
	
		ans = n / 2;
		jav = n / 2;
		if(prime(jav)||prime(ans)||prime(jav)&&prime(ans))
		{
			while(prime(jav)||prime(ans))
			{
				jav++;
				ans--;
			}
		}	
	}
	else
	{
		n--;
		ans = n / 2;
		jav = n / 2 + 1;
		if(prime(jav)|| prime(ans) || prime(jav) && prime(ans))
		{
			while( prime(jav)|| prime(ans))
			{
				jav++;
				ans--;
			}
		}
	}
	cout << ans << " "<< jav <<endl;
}