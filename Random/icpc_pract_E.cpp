#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 2002
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int a[sz];
int main()
{
    faster
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,mx=INT_MIN;
        mem(a,0);
        cin>>n;
        x=2*n;
        for(int i=1;i<=x;i++)
            cin>>a[i];
        for(int i=1,j=x;i<=n;i++,j--)
            mx=max(mx,a[i]+a[j]);
        cout<<mx<<'\n';
    }
    return 0;
}

