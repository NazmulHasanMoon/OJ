#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200003
#define ll long long
int b[sz],c[sz];
bool a[sz];
int  main()
{
    faster
    int n,mx=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    b[0]=c[n+1]=0;
    for(int i=1,j=n;i<=n;i++,j--)
    {
        if(a[i]==1)
            b[i]=b[i-1]+1,mx=max(mx,b[i]);
        if(a[j]==1)
            c[j]+=c[j+1]+1;
    }
    mx=max(mx,c[1]+b[n]);
    cout<<mx<<endl;
    return 0;
}
