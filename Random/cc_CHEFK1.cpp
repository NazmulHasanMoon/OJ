/*************************************************************************************
                         ---------------------------
                   ------Bismillahir-Rahmanir-Rahim------
                         ---------------------------
            //     //   Name: MD: NAZMUL HASAN              //     //
           //     //    Institute: HSTU                    //     //
          //     //     Dept.: CSE                        //     //
        //     //      Email: nazmulmoon123@gmail.com   //     //
    -----------------------------------------------------------------------
            ---------- I Love Programming as Gaming ----------
**************************************************************************************/
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

#define si(a) sf("%d",&a)
#define sl(a) sf("%I64d",&a)
#define sii(a,b) sf("%d%d",&a,&b)
#define Pi(a) pf("%d\n",a)
#define Pin(a) pf("%d ",a)
#define Pl(a) pf("%I64d\n",a)
#define pln(a) pf("%I64d ",a)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define case(x) cout<<"Case "<<x<<": "
#define ll long long
/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647
int main()
{
    ll t,n,m,x,y,z,ans;
    cin>>t;
    while(t--)
    {
        sf("%lld %lld",&n,&m);
        if(n==1)
        {
            pf("%lld\n",m);
            continue;
        }
        if(m<n-1)
        {
            pf("-1\n");
            continue;
        }
        if(n==2)
        {
            if(m==n-1)
                pf("1\n");
            else if(m<=3)
                pf("2\n");
            else
            {
                x=3;
                ans=2;
                while(x<m)
                {
                    ans++;
                    x+=2;
                }
                pf("%lld\n",ans);
            }
            continue;
        }
        if(m>=n-1&&m<=n+1)
        {
            pf("2\n");
            continue;
        }
        ans=2;
        x=n+2;
        y=(n*(n-1))/2;
        y+=2;
        for(ll i=2;x<=y&&x<=m;i++)
        {
            ans++;
            x+=i;
        }
        if(x<=m)
        {
            x=(n*(n+1))/2;
            x++;
            while(x<=m)
            {
                ans++;
                x+=n;
            }
        }
        pf("%lld\n",ans);
    }
    return 0;
}
