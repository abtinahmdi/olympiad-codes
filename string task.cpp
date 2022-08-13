#include<bits/stdc++.h>
using namespace std;

int main()
{
	int f;
	string k;
	cin>> k;
	for(int i =0 ; i<k.length(); i++){
		if(k[i]=='a'||k[i]=='e'||k[i]=='i'||k[i]=='o'||k[i]=='u'||k[i]=='y'||k[i]=='A'||k[i]=='E'||k[i]=='O'||k[i]=='I'||k[i]=='U'||k[i]=='Y')
			f++;
		else{
			cout<< "." << char(tolower(k[i]));
		}
	}
	return 0;
}