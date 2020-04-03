#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 5000003
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll unsigned long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);

#define pb()   pushback()
int phi[sz];
ll sum[sz];
void sieve()
{
    int i,n(sz-3),k;
    for(i=1;i<=n;i++)
        phi[i]=i;
    for(i=2; i<=n; i++)
    {
        if(phi[i]==i)
        {
            for(k=i; k<=n; k+=i)
                phi[k]-=(phi[k]/i);
        }
    }
}
void Sum()
{
    int n=sz-3;
    for(int i=2;i<=n;i++)
    {
        sum[i]=phi[i];
        sum[i]=sum[i]*sum[i];
        sum[i]+=sum[i-1];
    }
}
int main()
{
    //faster
    int t,cs(1);
    sieve();
    Sum();
    sf("%d",&t);
    while(cs<=t)
    {
        int a,b;
        sf("%d %d",&a,&b);
        ll s=sum[b]-sum[a-1];
        pf("Case %d: %llu\n",cs++,s);
    }
    return 0;
}

