#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 102
int a[sz];
int main()
{
    faster
    int n,re(0),mx(0),x,y;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        return cout<<"0\n",0;
    for(int i=1;i<n;i++)
    {
        re=0;
        if(a[i-1]==1&&a[i]==2)
            re++;
        while(i<n&&(a[i-1]+1==a[i]))
            i++,re++;
        if(i==n&&a[i-1]==1000&&a[i-1]-1==a[i-2])
            re++;
        mx=max(mx,re-1);
    }
    cout<<mx<<'\n';
    return 0;
}
