#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<pair<int,int>>vec;
int dp[N];
int a[N];
int b[N];
int maxx;
int main()
{
	int t,n;
	cin>>t;
	while(t--){
    	cin>>n;
    	vec.clear();
    	for (int i=0;i<n;i++)
    	{
        	cin>>a[i];
    	}
    	for (int i=0;i<n;i++)
    	{
        	cin>>b[i];
    	}
    	for (int i=0;i<n;i++)
    	{
        	vec.push_back(pair<int,int>(a[i],b[i]));
		}
		int maxi=0;
    	sort(vec.begin(), vec.begin() + n);
    	for(int i=0;i<n;i++)
    	{
    		dp[i]=1;
        for(int j=0;j<i;j++)
        {
        	if(vec[i].second>=vec[j].second && dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
        }
    	maxx=max(dp[i], maxx);
    	}
		cout<<maxx<<endl;
	}
}
