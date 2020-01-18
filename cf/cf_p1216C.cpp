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
#define PI acos(-1.0)
#define rn PI/180
#define TC(t)         scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 1000001
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
/*int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};*/
bool vis[SIZE];
int main()
{
    faster
    int x1[4],y1[4],x2[4],y2[4];
    bool left,mid,right;
    mid=true;
    for(int i=0; i<3; i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];

    }
    left=right=false;
    if(x1[1]<=x1[0]&&x2[1]>=x1[0]&&y1[1]<=y1[0]&&y2[1]>=y2[0])
    {
        ///cout<<(y1[1]<=y1[0])<<endl;
        left=true;
        if(x2[1]>=x2[0])
            right=true;
        else
        {
            if(x1[2]<=x2[1]&&y1[2]<=y1[0]&&y2[2]>=y2[0]&&x2[2]>=x2[0])
                right=true;
        }
    }
    else if(x1[2]<=x1[0]&&x2[2]>=x1[0]&&y1[2]<=y1[0]&&y2[2]>=y2[0])
    {
        ///cout<<"@";
        left=true;
        if(x2[2]>=x2[0])
            right=true;
        else
        {
            if(x1[1]<=x2[2]&&y1[1]<=y1[0]&&y2[1]>=y2[0]&&x2[1]>=x2[0])
                right=true;
        }
    }
    if(left&&right)
        cout<<"NO\n";
    else
    {
        ///check for up to down or down to up
        if(y1[1]<=y1[0]&&y2[1]>=y1[0]&&x1[1]<=x1[0]&&x2[1]>=x2[0])
        {
            ///cout<<(y1[1]<=y1[0])<<endl;
            left=true;
            if(y2[1]>=y2[0])
                right=true;
            else
            {
                if(y1[2]<=y2[1]&&x1[2]<=x1[0]&&x2[2]>=x2[0]&&y2[2]>=y2[0])
                    right=true;
            }
        }
        else if(y1[2]<=y1[0]&&y2[2]>=y1[0]&&x1[2]<=x1[0]&&x2[2]>=x2[0])
        {
            ///cout<<"@";
            left=true;
            if(y2[2]>=y2[0])
                right=true;
            else
            {
                if(y1[1]<=y2[2]&&x1[1]<=x1[0]&&x2[1]>=x2[0]&&y2[1]>=y2[0])
                    right=true;
            }
        }
        if(left&&right)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
