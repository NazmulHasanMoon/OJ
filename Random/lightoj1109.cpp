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
#define faster ios_base::sync_with_stdio(0);cin.tie(false);cout.tie(false);
#define case(x) cout<<"Case "<<x<<": "

int j,p[1030],cnt;
map<int,int>mpp;
bool x[1030];
int re[1030];
void sieve()
{
    int n=1000;
    int i,k;
    p[j++]=2;
    mpp[2]=1;
    for(i=4; i<=n; i+=2)
        x[i]=1,mpp[i]=0;

    for(i=3; i<=n; i+=2)
    {
        if(!x[i])
        {
            p[j++]=i;
            mpp[i]=1;
            re[i]=2;
            if(i<=32)
            {
                for(k=i*i; k<=n; k+=i*2)
                    x[k]=1,mpp[i]=0;
            }
        }
    }
}
void NOD()
{
    re[1]=1;
    re[2]=2;
    re[3]=2;
    int u,z;
    for(int i=4; i<=1000; i++)
    {
        if(mpp[i]!=1)
        {
            u=i;
            z=(int)ceil(sqrt(i*1.0));
            re[i]=1;
            for(int k=0; p[k]<=u; k++)
            {
                int a(0);
                while(u%p[k]==0)
                {
                    a++;
                    u/=p[k];
                }
                re[i]*=(a+1);
            }
        }
    }
}
bool comp(pair<int,int>x,pair<int,int>y)
{
    if(x.ff<y.ff||(x.ff==y.ff&&x.ss>y.ss))
        return 1;
    else
        return 0;

}
int main()
{
    sieve();
    NOD();
    vector<pair<int,int> >vp;
    for(int i=1;i<=1000;i++)
        vp.push_back({re[i],i});//cout<<re[i]<<' '<<i<<endl;
    sort(vp.begin(),vp.end(),comp);
    int t,y,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        sf("%d",&y);
        pf("Case %d: %d\n",cs++,vp[y-1].ss);
    }
    return 0;
}
