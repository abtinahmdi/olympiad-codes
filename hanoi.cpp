#include <bits/stdc++.h>
using namespace std;
 
void Hanoi(int n, char from_pole, char to_pole, char aux_pole)
{
    if (n == 1)
    {
        cout << "1 from pole " << from_pole << " to pole " << to_pole <<endl;
        return;
    }
    Hanoi(n - 1, from_pole, aux_pole, to_pole);
    cout << n << " from pole " << from_pole <<" to pole " << to_pole << endl;
    Hanoi(n - 1, aux_pole, to_pole, from_pole);
}
int main()
{
    int n;
    cin >> n;
    Hanoi(n, 'A', 'C', 'B');
    return 0;
}