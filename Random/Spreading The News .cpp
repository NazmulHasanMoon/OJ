#include<bits/stdc++.h>
using namespace std;
#define pf printf
vector<int>v[2502];
int lvl[2502];
void bfs(int x)
{
    queue<int>q;
    bool vis[2502];
    int a[2502];
    memset(vis,0,sizeof(vis));
    memset(a,0,sizeof(a));
    q.push(x);
    vis[x]=1;
    int ans(0);
    lvl[x]=0;
    int mx=0;
    while(!q.empty())
    {
        int u=q.front();
       //cout<<u<<"**\n";
        q.pop();
        int c(0);
        for(auto i:v[u])
        {
            if(!vis[i])
            {
                lvl[i]=lvl[u]+1;
                q.push(i);
                a[lvl[i]]++;
                if(mx<a[lvl[i]])
                    mx=a[lvl[i]],ans=lvl[i];
                vis[i]=1;
            }
        }
    }
    if(mx==0)
        pf("0\n");
    else
        pf("%d %d\n",mx,ans);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int e,a,x;
    cin>>e;

    for(int i=0;i<e;i++)
    {
        cin>>a;
        for(int j=0;j<a;j++)
        {
            cin>>x;
            v[i].push_back(x);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        bfs(x);
    }
    return 0;
}
