#include <bits/stdc++.h>
using namespace std;
long long n, k, id;
vector<long long> v;
int main()
{
	cin >> n >> k;
	for (int i = 0;i < n;i++){
		cin >> id;
		if(find(v.begin(), v.end(), id) == v.end()){
			if(v.size() >= k) 
				v.pop_back();
			v.emplace(v.begin(), id);
		}
	}
	cout << v.size() << endl;
	for(int i = 0;i < v.size();i++){
		cout << v[i] << " ";
	}
	return 0;
}