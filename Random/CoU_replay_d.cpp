/***********************************************************
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

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647


const int MOD=1000000007;
typedef long long ll;
typedef unsigned long long ull;

///      direction
int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};

int main()
{
    int n;
    si(n);
    while(n--)
    {
        bool flag=false;
        string s;
        cin>>s;
        queue<pair<char,int>>sL,sR,sq;
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='(')
                sL.push({s[i],i});
            else if(s[i]=='?')
                sq.push({s[i],i});
            else
                sR.push({s[i],i});
        }
        while(!sR.empty())
        {
            if(!sL.empty()&&sL.front().ss<sR.front().ss)
                sL.pop(),sR.pop();
            else if(!sq.empty()&&sq.front().ss<sR.front().ss)
                sq.pop(),sR.pop();
            else
                break;
        }
        if(!sR.empty())
        {
            pf("no\n");
            continue;
        }
        while(!sL.empty())
        {
            if(!sq.empty()&&sL.front().ss<sq.front().ss)
                sq.pop(),sL.pop();
            else if(!sq.empty())
            {
                if((sL.front().ss-sq.front().ss)%2==0)
                {
                    while(!sq.empty()&&sq.front().ss<sL.front().ss)
                        sq.pop();
                }
                else
                    break;
            }
            else
                break;
        }
        if(!sL.empty())
        {
            pf("no\n");
            continue;
        }
        if(sq.size()%2==0)
            pf("yes\n");
        else
            pf("no\n");
    }
    return 0;
}
