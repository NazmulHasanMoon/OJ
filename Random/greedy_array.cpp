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

unordered_map<int,int>m;
int main()
{
    //faster
    int t,a,n,step,x,p,q,r,s;
    si(t);
    while(t--)
    {
        si(n);
        step=0;
        x=0;
        loop(i,0,n)
        {
            cin>>a;
            a%=4;
            m[a]++;
            x+=a;
        }
        if(x%4!=0)
            pf("-1\n");
        else
        {
            q=min(m[3],m[1]);
            step+=q;
            m[3]-=q,m[1]-=q;
            if(m[3]>0)
            {
                q=m[3]/4;
                step+=((q*4)-q);
                m[3]%=4;
                if(m[3]>=2&&m[2])
                    step+=2,m[3]-=2,--m[2];
            }
            if(m[2]>0)
            {
                step+=(m[2]/2);
                m[2]%=2;
                if(m[2]>0&&m[1]>1)
                    step+=2,m[2]=0,m[1]-=2;
            }
            q=m[1]/4;
            step+=((q*4)-q);
             m[1]%=4;
            if(m[1]>0&&m[2]>0&&m[3]>0)
                pf("-1\n");
            else
                pf("%d\n",step);
        }
        m.clear();
    }


    return 0;
}
