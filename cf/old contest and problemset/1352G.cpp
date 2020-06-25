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
#define SIZE 1001
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
int a[SIZE],n,x;
bool vis[SIZE];
vector<int>ans;
void dfs(int u)
{
    int j,i=u-4;
    if(i<=0)i=1;
    j=u+4;
   /// cout<<i<<' '<<u<<' '<<j<<endl;
    for(;i<=j&&i<=n;i++)
    {
        x=abs(u-i);
        if((x>=2&&!vis[i])){
            ///cout<<ans.back()<<'-'<<u<<'-'<<x<<'-'<<i<<endl;
            vis[i]=1;
            ans.pb(i);
            dfs(i);
            //cout<<ans.size()<<"#\n";
            if(ans.size()==n)
                return;
            vis[i]=0;
            ans.pop_back();
            ///cout<<ans.back()<<'+'<<u<<'-'<<x<<'-'<<i<<endl;
        }
    }
    ///ans.pop_back();
    return;
}
int main()
{
    faster
    int t;
    cin>>t;
    string s;
    //map<int,int>mp,mm;
    while(t--)
    {
        cin>>n;
        memset(vis,0,sizeof(vis[0])*(n+1));
        for(int i=1;i<=n;i++){
            vis[i]=1;
            ans.pb(i);
            dfs(i);
            vis[i]=0;
            if(ans.size()==n)break;
            ans.pop_back();
        }
        if(ans.size()<n)cout<<"-1\n";
        else
        {
            for(auto i:ans)cout<<i<<' ';
            cout<<'\n';
        }
        ans.clear();
    }
    return 0;
}



