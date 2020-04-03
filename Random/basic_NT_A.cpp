#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c)   for(int a=b;a<c;a++)
#define loopa(p,v)    for(auto p:(v))
#define lloop(a,b,c)  for(long long a=b;a<c;a++)
#define rloop(a,b,c)  for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define ll long long
int p[10000],vis[10002],j;
void sieve()
{
    memset(vis,0,sizeof(vis));
    int l=100;
    int n=10000;
    p[j++]=2;
    for(int i=4;i<=n;i+=2)
        vis[i]=1;
    for(int i=3;i<=n;i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<=l)
            {
                for(int k=i*i;k<=n;k+=i*2)
                    vis[k]=1;
            }
        }
    }
}
map<int,int>mpp;
void divisor(int x)
{
    for(int i=0;p[i]<=x;i++)
    {
        while(x%p[i]==0)
            x/=p[i],mpp[p[i]]++;
    }
}
int main()
{
    int x,t=10;
    sieve();
    ll s(1);
    while(t--){
        sf("%d",&x);
        if(x>1)
            divisor(x);
    }
    map<int,int>::iterator it;
    for(it=mpp.begin();it!=mpp.end();it++){

            s=s*(ll)(it->ss +1);
    }
    pf("%lld\n",s%10);
    return 0;
}
