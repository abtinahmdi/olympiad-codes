#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size, largestValue, currentValue;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> currentValue;

        if (i == 0 || currentValue > largestValue)
        {
            largestValue = currentValue;
        }
    }
	cout << largestValue << endl;
    return 0;
}
