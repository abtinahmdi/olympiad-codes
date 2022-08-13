#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int y, ny, X, a=1;
    cin>>y;
 
    ny=y+1;
 
    int arr[4];
 
    do
    {
        int count=0;
        X=ny;
 
        for(int i=0; i<4; i++)
        {
            arr[i]=X%10;
            X=X/10;
        }
 
        for(int i=0; i<4; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                if(arr[i]==arr[j])
                count++;
            }                    
        }
 
        if(count!=0)
        ny=ny+1;
        else
        a=0;
 
    }while(a!=0);
 
    cout<<ny;   
 
    return 0;
}