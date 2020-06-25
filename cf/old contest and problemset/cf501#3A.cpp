#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 103
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
bool a[sz];
int ans[sz];
int main()
{
    faster
    mem(a,0);
    int n,m,b,c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>b>>c;
        for(int j=b;j<=c;j++)
            a[j]=true;
    }
    int cnt=0;
    for(int i=1,j=0;i<=m;i++)
    {
        if(a[i]==false)
            cnt++,ans[j++]=i;
    }
    cout<<cnt<<'\n';
    for(int i=0;i<cnt;i++)
        cout<<ans[i]<<' ';
    return 0;
}

