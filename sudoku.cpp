#include<bits/stdc++.h>
using namespace std;
const int N = 9;
int a[N][N];
bool ok(int a[N][N], int rad, int sot, int num)
{
	for (int i = 0; i < 9; i++)
		if (a[rad][i] == num)
			return false;
	for (int i = 0; i < 9; i++)
		if (a[i][sot] == num)
			return false;
	int srad = rad - rad % 3;
	int ssot = sot - sot % 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[i + srad][j + ssot] == num)
				return false;
	return true;
}
bool halal(int a[N][N], int rad, int sot)
{
	if (rad == N - 1 && sot == N)
		return true;
	if (sot == N){
		rad++;
		sot = 0;
	}
	if (a[rad][sot] > 0)
		return halal(a, rad, sot + 1);
	for (int num = 1; num <= N; num++){
		if (ok(a, rad, sot, num)){
			a[rad][sot] = num;
			if (halal(a, rad, sot + 1))
				return true;
		}
		a[rad][sot] = 0;
	}
	return false;
}
int main()
{
	for(int i = 0;i < 9;i++){
		for(int j = 0;j < 9;j++){
			cin >> a[i][j];
		}
	}
	if(halal(a, 0, 0))
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	else
		cout << "no solution exists " << endl;
	return 0;
}