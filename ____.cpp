#include<bits/stdc++.h>
using namespace std;
int waterCollected(int index1 , int index2 , int arr[]){
    int x = (index2 - index1 - 1) * min(arr[index1] , arr[index2]);
    int y = 0;
    for (int i = index1 + 1 ; i < index2 ; i++)
        y += arr[i];
    return x - y;
}
int main()?
{
    ios::sync_with_stdio, cin.tie(0), cout.tie(0);
	int n , arr[1000000];
    cin >> n;
    for (int i = 0 ; i < n ; i++)
        cin >> arr[i];
    int totalWaterCollected = 0;
    for (int i = 0 ; i < n - 1 ; i++){
        int index = i + 1;
        for (int j = i + 1 ; j < n ; j++){
            if (arr[j] >= arr[i]){
                index = j;
                break;
            }
            else if (arr[j] > arr[index])
                index = j;
        }
        totalWaterCollected += waterCollected(i , index , arr);
        i = index - 1;
    }
    cout << totalWaterCollected;
    return 0;
}