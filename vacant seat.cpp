#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, mid, a[N];
string s;
int main()
{
    cin >> n;
    int l = 0, r = n;
    cout << l << endl;
    cin >> s;
    if (s == "Male") {
		a[l] = 2;
		a[r] = a[l];
	}
    else if (s == "Female") {
    	a[l] = 3;
		a[r] = a[l];
	}
    else 
		return 0;
    while (s != "Vacant"){
        mid = (l + r) / 2;
        cout << mid << endl;
        cin >> s;
        if (s == "Male") 
			a[mid] = 2;
        else 
			a[mid] = 3;
        if (a[mid] == a[r] && abs(r - mid) % 2) 
			l = mid;
        else if (a[mid] != a[r] && abs(r - mid) % 2 == 0) 
			l = mid;
        else 
			r = mid;
    }
    return 0;
}