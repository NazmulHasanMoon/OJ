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
#define SIZE 200001
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

vector<int>vec,vec1;
int a[SIZE];
int main()
{
    faster
    int t,n;
    cin>>t;
    bool ck;
    while(t--)
    {
        string s;
        cin>>n>>s;
        loop(i,0,n)
            vec.pb(s[i]-'0');
        loop(i,0,10)
        {
            ck=false;
            loop(j,0,n)
            {
                if(vec[j]>i)
                {
                    a[j]=2;
                    ck=true;
                }
                else if(vec[j]<i)
                    a[j]=1;
                else
                {
                    if(ck)
                        a[j]=1;
                    else
                        a[j]=2;
                }
            }
            loop(j,0,n)
            {
                if(a[j]==1)
                    vec1.pb(vec[j]);
            }
            loop(j,0,n)
            {
                if(a[j]==2)
                    vec1.pb(vec[j]);
            }
            ck=true;
            loop(j,0,n-1)
            {
                if(vec1[j]>vec1[j+1])
                {
                    ck=false;
                    break;
                }
            }
            vec1.clear();
            if(ck)
                break;
        }
        if(!ck)
            cout<<"-\n";
        else
        {
            loop(i,0,n)
                cout<<a[i];
            cout<<"\n";
        }
        vec.clear();
    }
    return 0;
}
