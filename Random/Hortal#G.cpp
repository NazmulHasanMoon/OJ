#include<bits/stdc++.h>
using namespace std;
#define sz 6
int a[sz][sz];
int main()
{
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
            cin>>a[i][j];
    }
    int mx=INT_MIN,s;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {

            s=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            mx=max(mx,s);
        }
    }
    cout<<mx<<endl;
    return 0;
}
