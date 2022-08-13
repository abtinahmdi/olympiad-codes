#include<bits/stdc++.h>
using namespace std;
long long ans;
const int N = 1e6 + 5;
int a[N];
void Merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int *x = new int[n1];
    int *y = new int[n2];
    k = l;
    for(i = 0; i < n1; i++)
        x[i] = a[k++];
    k = m + 1;
    for(i = 0; i < n2; i++)
        y[i] = a[k++];
    i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(x[i] <= y[j])
            a[k] = x[i++];
        else
            a[k] = y[j++], ans += (n1 - i);
        k++;
    }
    for(int w = i; w < n1; w++)
        a[k++] = x[w];
    for(int w = j; w < n2; w++)
        a[k++] = y[w];
    delete[] x;
    delete[] y;
}
void mergeSort(int l, int r)
{
    if(l < r){
        int mid = (l + r) / 2;
        mergeSort(l, mid);
        mergeSort(mid + 1, r);\
        Merge(l, mid, r);
    }
}
int main()
{
    int i, j, k;
    int n, m;
    ans = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    mergeSort(0, n - 1);
    cout << ans;
    return 0;
}