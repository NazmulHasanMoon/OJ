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
int A[100][100],B[100][100];
int main()
{
    faster
    int n,a,b,m,x,y,z,re,ans;
    re=ans=0;
    cin>>n>>m;
    vector<pair<int,int>>v;
    bool ok,flag,ck;
    ok=flag=ck=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>A[i][j],B[i][j]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i<n&&j<m&&A[i][j]==1&&A[i][j+1]==1&&A[i+1][j+1]==1&&A[i+1][j]==1)
            {
                B[i][j]=B[i][j+1]=B[i+1][j]=B[i+1][j+1]=1;
                v.pb({i,j});
            }

        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i][j]!=B[i][j])
                return cout<<"-1\n",0;
        }
    }
    cout<<v.size()<<'\n';
    loopa(i,v)
        cout<<i.ff<<' '<<i.ss<<'\n';
    return 0;
}
