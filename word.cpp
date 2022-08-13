#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int u=0,l=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]-'a'<0)
	        u++;
	    else
	        l++;
	}
	if(u>l){
	    for(int i=0;i<s.size();i++){
	        if(s[i]-'a'<0)
                cout<<s[i];
            else
                cout<<char(s[i]-'a'+'A');
	    }
	}
	else{
	   
	    for(int i=0;i<s.size();i++){
	        if(s[i]-'a'<0)
                cout<<char(s[i]+'a'-'A');
            else
                cout<<s[i];
        }
    }
	return 0;
	
}