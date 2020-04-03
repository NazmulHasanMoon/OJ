#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int a[n+2][n+2],b[n+2][n+2];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++)
    {
        b[i][0]=a[i][0];
        for(int j=1;j<n;j++)
            b[i][j]=a[i][j-1]+a[i][j];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[j][i]
        }
    }
    return 0;
}
