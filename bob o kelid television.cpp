#include <iostream>

using namespace std;

int main(){

    int n , x , k;

    cin >> n >> x >> k;

    string arr[105];

    for (int i = 0 ; i < n ; i++)

        cin >> arr[i];

    while (k != 0){

        if (x < n)

            x++;

        else

            x = 1;

        k--;


    }

    cout << arr[x - 1] << endl;


    return 0;
}