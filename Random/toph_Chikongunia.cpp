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
int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};
vector<int>v[SIZE];
string s[SIZE];
int main ()
{
    faster
    int n,m,x,y,p,q;
    ll ans(0);
    cin>>n>>m;
    unordered_set<int>st;
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[0][j]!=s[i][j])
                v[i].pb(j);
        }
        if(v[i].size()==1)
            ans++;
    }
    for(int i=1; i<n; i++)
    {
        for(auto k : v[i])
            st.insert(k);
        for(int j=i+1; j<n; j++)
        {
            x=0;
            for(auto k : st){
                if(s[i][k]!=s[j][k])x++;
                if(x>1)
                    break;
            }
            for(auto k : v[j])
            {
                if(st.count(k)==0&&s[i][k]!=s[j][k])
                    x++;
                if(x>1)
                    break;
            }
            if(x==1)
                ans++;
        }
        st.clear();
    }
    cout<<ans<<'\n';
    return 0;
}