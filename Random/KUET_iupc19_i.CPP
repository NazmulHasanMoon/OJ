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
#define SIZE 30001
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
vector<pair<int,int>>vec[SIZE];
unordered_map<int,int>mm[SIZE],mm1[SIZE];
unordered_map<int,int>mcp;
bool vis[SIZE];
vector<int>cp[SIZE];
void dfs1(int s,int x)
{
    vis[s]=true;
    int sz=vec[s].size();
    for(int i=0;i<sz;i++)
    {
        if(vis[vec[s][i].ff]==false)
        {
            cp[x].pb(vec[s][i].ff);
            mcp[vec[s][i].ff]=x;
            dfs1(vec[s][i].ff,x);
        }
    }
}
void dfs(int s,int e,int pre)
{
    vis[s]=true;
    int sz=vec[s].size();
    for(int i=0; i<sz; i++)
    {
        if(vis[vec[s][i].ff]==false)
        {

            mm[e][vec[s][i].ff]=vec[s][i].ss+pre;
            ///cout<<pre<<'-'<<vec[s][i].ff<<'!'<<mm[e][vec[s][i].ff]<<endl;
            pre=mm[e][vec[s][i].ff];
            dfs(vec[s][i].ff,e,pre);
        }
    }
}
void dfs2(int s,int e,int pre)
{
    vis[s]=true;
    int sz=vec[s].size();
    for(int i=0; i<sz; i++)
    {
        if(vis[vec[s][i].ff]==false)
        {

            mm1[e][vec[s][i].ff]=vec[s][i].ss+pre;
            ///cout<<pre<<'-'<<vec[s][i].ff<<'!'<<mm[e][vec[s][i].ff]<<endl;
            pre=mm1[e][vec[s][i].ff];
            dfs2(vec[s][i].ff,e,pre);
        }
    }
}
int main()
{
    int t,cs(1);
    sf("%d",&t);
    int n,e,u,v,w,q,j;
    while(cs<=t)
    {
        sf("%d %d",&n,&e);
        for(int i=1;i<=n;i++)
            vis[i]=false,vec[i].clear(),mm[i].clear(),mm1[i].clear();
        while(e--)
        {
            sf("%d %d %d",&u,&v,&w);
            vec[u].pb({v,w});
            vec[v].pb({u,w});
        }
        j=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==false)
            {
                cp[j].pb(i);
                mcp[i]=j;   ///i'th element at j'th component
                dfs1(i,j);  ///find connected components
                j++;
            }
        }
        for(int i=1;i<=n;i++)
            vis[i]=false;
        int sz;
        bool flag;
        for(int i=0;i<j;i++)
        {
            sz=cp[i].size();
            flag=false;
            for(int k=0;k<sz;k++)
            {
                if(vec[cp[i][k]].size()==1&&vis[cp[i][k]]==false)
                {
                    mm[i][cp[i][k]]=0;
                    dfs(cp[i][k],i,0);
                    flag=true;
                    break;
                }
            }
            if(!flag&&vec[cp[i][0]].size()==2&&vis[cp[i][0]]==false)
            {
                int z=cp[i][0];
                mm[i][z]=0;
                mm[i][vec[z][0].ff]=vec[z][0].ss;
                vis[z]=true;
                dfs(vec[z][0].ff,i,vec[z][0].ss);
                if(vis[vec[z][1].ff])
                {
                    for(int k=0;k<sz;k++)
                        vis[cp[i][k]]=false;
                }
                vis[z]=true;
                mm1[i][z]=0;
                mm1[i][vec[z][1].ff]=vec[z][1].ss;
                dfs2(vec[z][1].ff,i,vec[z][1].ss);
            }
        }

        si(q);
        pf("Case %d:\n",cs++);
        while(q--)
        {
            sf("%d %d",&u,&v);
            if(mcp[u]!=mcp[v])
                pf("-1\n");
            else{
                int mn;
                if(mm1[mcp[u]].empty())
                    mn=abs(mm[mcp[u]][u]-mm[mcp[u]][v]);
                else
                    mn=min(abs(mm[mcp[u]][u]-mm[mcp[u]][v]),min(abs(mm1[mcp[u]][u]-mm1[mcp[u]][v]),min(mm1[mcp[u]][u]+mm[mcp[u]][v],mm[mcp[u]][u]+mm1[mcp[u]][v])));
                pf("%d\n",mn);
            }
        }
        for(int i=0;i<j;i++)
            cp[i].clear();
        mcp.clear();
    }
    return 0;
}
