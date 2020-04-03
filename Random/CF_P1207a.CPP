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

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647
#define ll long long
int main()
{
    faster
    int t,n,a,b,x,y,z,re,ans;
    cin>>t;
    while(t--)
    {
        re=ans=0;
        int b,p,f,h,c;
        bool A=false;
        cin>>b>>p>>f>>h>>c;
        if(b<2)
            cout<<"0\n";
        else{
        if(h>=c)
        {
            bool ok;
            ok=true;
            while(ok)
            {
                if(p&&b>=2)
                {
                    ans+=h;
                    p--,b-=2;
                    continue;
                }
                if(f&&b>=2)
                {
                    while(ok)
                    {
                        ans+=c;
                        f--;
                        b-=2;
                        if(!f||b<2)
                            ok=false;
                    }
                    ok=false;
                }
                else
                    ok=false;
            }
        }
        else
        {
            bool ok;
            ok=true;
            while(ok)
            {
                if(f&&b>=2)
                {
                    ans+=c;
                    f--,b-=2;
                    continue;
                }
                ///cout<<ans<<endl;
                if(p&&b>=2)
                {
                    while(ok)
                    {
                        ans+=h;
                        p--,b-=2;
                        //cout<<ans<<' '<<p<<'-'<<h<<endl;
                        if(!p||b<2)
                            ok=false;
                    }
                    ok=false;
                }
                else
                    ok=false;
            }
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}
