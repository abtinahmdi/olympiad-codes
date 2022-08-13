#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int a[N];
int score[N];
char b[N][N];
int w[N];
int main () {
	int n, m;
	cin >> n >> m;
	n *= 2;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		a[i] = i;
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j += 2){
			int c, d;
			for (int k = 0; k < n; k++){
				if (a[k] == j)
					c = k;
				if (a[k] == j + 1)
					d = k;
			}
			if (b[c][i] == 'P' && b[d][i] == 'G')
				score[c]++;
			if (b[c][i] == 'G' && b[d][i] == 'P')
				score[d]++;
			if (b[c][i] == 'P' && b[d][i] == 'C')
				score[d]++;
			if (b[c][i] == 'C' && b[d][i] == 'P')
				score[c]++;
			if (b[c][i] == 'C' && b[d][i] == 'G')
				score[d]++;
			if (b[c][i] == 'G' && b[d][i] == 'C')
				score[c]++;
		}
		for (int j = 0; j < n; j++){
			for (int k = 0; k < j; k++){
				if (score[j] > score[k] && a[j] > a[k])
					swap(a[j], a[k]);
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < i; j++){
				if (score[j] == score[i] && a[i] < a[j])
					swap(a[j], a[i]);
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			if (score[j] == score[i] && a[i] < a[j])
				swap(a[j], a[i]);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (a[j] == i){
				w[i] = j + 1;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++){
		cout << w[i] << endl;
	}
}