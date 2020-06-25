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
#define SIZE 15000001
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
vector<int>p;
unordered_map<int,int>m;
bool vis[SIZE];
int a[SIZE];
void sieve()
{
    int l=3872;
    p.pb(2);

    for(int i=4;i<SIZE;i+=2)
        vis[i]=true;
    for(int i=3;i<=SIZE;i+=2)
    {
        if(!vis[i]){
            p.pb(i);
            if(i<=l)
                for(int j=i*i;j<=SIZE;j+=i*2)vis[j]=true;
        }
    }
}
void factor(int x)
{
    int i=0;
    while(p[i]*p[i]<=x)
    {
        if(x%p[i]==0)
        {
            while(x%p[i]==0)
                x/=p[i];
            m[p[i]]++;
        }
        i++;
    }
    if(x>1)
        m[x]++;
}
int main()
{
    faster
    sieve();
    int n,res,g,mx=-1;
    cin>>n>>a[0];
    g=a[0];
    loop(i,1,n)
        cin>>a[i],g=gcd(g,a[i]);
    loop(i,0,n)
        factor(a[i]/g);
    if(m.empty())
        cout<<"-1\n";
    else
    {
        for(auto i : m)
            mx=max(mx,i.ss);
        cout<<n-mx<<'\n';
    }
    return 0;
}
