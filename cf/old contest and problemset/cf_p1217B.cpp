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
vector<pair<ll,ll>>v;
/*bool comp(pair<ll,ll>x,pair<ll,ll>y)
{
    if(x.ss<=y.ss)
    {
        return x.ff>=y.ff;
    }
    else
        return false;
}*/
int main()
{
    faster
    int t,n,idx;
    ll x,res,step,mn,a,b,j,mx;
    cin>>t;
    bool ck;
    while(t--)
    {
        v.clear();
        cin>>n>>x;
        res=x;
        step=0;
        mx=0;
        idx=j=0;
        mn=1e18;
        ck=false;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            mx=max(mx,a);
            if(b<a||x<=a)
                ck=true;
            v.pb({a,b});
        }
        if(!ck)
            cout<<"-1\n";
        else if(mx>=x)
            cout<<"1\n";
        else
        {
            ///sort(v.begin(),v.end(),comp);
            for(auto i : v)
            {
                if(x-i.ff+i.ss<mn)
                {
                    mn=x-i.ff+i.ss;
                    idx=j;
                }
                j++;
            }
            mn=v[idx].ff-v[idx].ss;
            ////cout<<mn<<'!';
            x-=mx;
            step=(x+mn-1)/mn;
            cout<<step+1<<'\n';
        }

    }
    return 0;
}
