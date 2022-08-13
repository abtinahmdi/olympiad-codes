#include<bits/stdc++.h>
using namespace std;
int s, t, x;
bool ison = true;
bool ans;
int main()
{
	cin >> s >> t >> x;
	for(int i = 1; i <= 24; i++)
    {
        if(i == s)
            ison = true;
        else if(i == t)
            ison = false;
        if(i == x)
        {
            if(ison)
                ans = true;
            else
                ans = false;
        }
    }
    if(ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}