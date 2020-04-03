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
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
void p_div(ll x)
{
    ll z=(ll)ceil(sqrt(x+0.0));
    while(x%2==0)
    {
        x/=2;
        pf(" 2");
        if(x>1)
            pf(" x");
        else
            pf("\n");
    }
    for(ll i=3; i<=z&&i<=x; i+=2)
    {
        while(x%i==0)
        {
            x/=i;
            pf(" %lld",i);
            if(x>1)
                pf(" x");
            else
                pf("\n");
        }
    }
    if(x>1)
        pf(" %lld\n",x);
}
int main()
{
    //faster
   // freopen("InputtputI.txt","r",stdin);
    //freopen("OutputI.txt","w",stdout);
    ll n;
    while(1)
    {
        sf("%lld",&n);
        if(n==0)
            break;
        pf("%lld =",n);
        if(n<0)
        {
            pf(" -1 x");
            n=abs(n);
        }
        p_div(n);
    }
    return 0;
}
