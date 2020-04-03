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
ll bigmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1%m;
    if(b%2==0)
    {
        ll x=bigmod(a,b/2,m);
        return (x*x)%m;
    }
    else
        return ((a%m)*bigmod(a,b-1,m))%m;
}
ll fib[92];
map<ll,ll>mm[SIZE];
int main()
{
    fib[0]=0;
    fib[1]=2;
    fib[2]=3;
    fib[3]=5;
    fib[4]=8;
    fib[5]=13;
    fib[6]=21;
    fib[7]=34;
    fib[8]=55;
    int i;
    int t,cs(1);
    ll n,k,m,x,y,z,p,q,pre,suf;
    for(i=10;i<=90; i++)
        fib[i]=fib[i-1]+fib[i-2];
    mm[91][90]=1;
    mm[91][89]=1;
    mm[92][90]=2;
    mm[92][89]=1;
    for(i=93;i<=100000;i++)
    {
        mm[i][90]=mm[i-1][90]+mm[i-2][90];
        mm[i][89]=mm[i-1][89]+mm[i-2][89];
    }
    ////////cout<<mm[94][90]<<':'<<mm[94][89]<<"@"<<mm[94][89]-mm[94][90]<<endl;
    si(t);
    while(cs<=t)
    {
        sl(n),sl(k),sl(m);
    case(cs++);
        if(n==1)
            pf("%d\n",((k%m)*(k%m))%m);
        else if(n<=90)
            pf("%lld\n",bigmod(k,fib[n],m));
        else
        {
            pre=bigmod(k,fib[90],m);
            x=mm[n][90];
            y=mm[n][89];
            while(--x)
                pre=(pre*pre)%m;
            suf=bigmod(k,fib[89],m);
            while(--y)
                suf=(suf*suf)%m;
            pf("%lld\n",(pre*suf)%m);
            ///pf("%d\n",(bigmod(k,(ll)fib[x]*(ll)mm[x],m)*bigmod(k,(ll)fib[y]*(ll)mm[y],m))%m);
        }

    }
    return 0;
}
