#include<bits/stdc++.h>
using  namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);
#define sz 2002
#define pb push_back
#define ll long long
int color[sz];
bool vis[sz];
int dp[sz][sz];
vector<int>v[sz];
bool isbicolor;
int black,white,b,c,n;
vector<pair<int,int>>knap;
void dfs(int u,int col)
{
    vis[u]=1;
    color[u]=col;
    (col)?white++:black++;
    for(auto i: v[u])
    {
        if(!vis[i])
            dfs(i,1-col);
        else if(color[i]==col)
            isbicolor=false;
    }
}
int KnapSack(int i,int sum)
{
    if(i==-1){
        if(sum==b||sum==c)return 1;
        else return 0;
    }
    if(dp[i][sum]!=-1)return dp[i][sum];
    return dp[i][sum]=KnapSack(i-1,sum+knap[i].first)|KnapSack(i-1,sum+knap[i].second);
}

int main()
{
    faster
    int g,p,w,t,ans,x,y,a;
    cin>>t;
    while(t--)
    {
        knap.clear();
        cin>>b>>c>>a;
        p=b+c;
        for(int i=1;i<=p;i++)
        {
            color[i]=-1;
            vis[i]=0;
            v[i].clear();
        }
        for(int i=0; i<a; i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        isbicolor=true;
        for(int i=1; i<=p; i++)
        {
            if(!vis[i])
            {
                black=white=0;
                dfs(i,1);
                knap.pb({black,white});
            }
        }
        if(!isbicolor)
        {
            cout<<"no\n";
            continue;
        }
        for(int i=0;i<=p;i++)
            memset(dp[i],-1,sizeof(dp[i]));
        if(KnapSack(knap.size()-1,0))cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}

