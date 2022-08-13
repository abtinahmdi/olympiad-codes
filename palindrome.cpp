#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
    string a = S;
    reverse(a.begin(), a.end());
    if (S == a) {
        return "Yes";
    }
    else {
        return "No";
    }
}
int main()
{
	string S;
	cin >> S;
    cout << isPalindrome(S);
 
    return 0;
}