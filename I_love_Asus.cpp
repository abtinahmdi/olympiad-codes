#include<iostream>
using namespace std;
int main()
{
	int n,max,ans=0,x=0;
	cin >> n;
	int a[n];
	max=-1;
	long long min=10000000000000;
	for(int i = 0 ; i < n ; i ++){
		cin >> a[i];
		if(a[i]>max){
			max=a[i];
			ans++;
		}	
		if(a[i]<min){
		min=a[i];
		ans++;
		}		
	}
	cout << ans-2 << endl;
}