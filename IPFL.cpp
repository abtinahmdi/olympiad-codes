#include <bits/stdc++.h>
using namespace std;
int n, q, md;
string s;
int main(void)
{
	cin >> n;
	cin >> s;
	cin >> q;
    int md = s.size() / 2;
    bool swp = false;
    for (int i = 0;i < q;i++){
        int t, a, b; 
		cin >> t >> a >> b;
        if(t == 1){
            if(swp){
                if(a > md) 
					a -= md;
                else 
					a += md;
                if(b > md) 
					b -= md;
                else 
					b += md;
            } 
            swap(s[a-1], s[b-1]);
        }
		else
            swp = !swp;
    }
    if(swp) 
		s = s.substr(md) + s.substr(0, md);
    cout << s << endl;
    return 0;
}