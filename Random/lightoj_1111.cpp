#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define ss second
#define ff first
using namespace std;
int main()
{
    int t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        int k,n,m;
        sf("%d %d %d",&k,&n,&m);
        int a[k+2];
        vector<int>v[1002];
        bool vis[n+2];
        int res[n+2];
        memset(res,0,sizeof(res));
        for(int i=0; i<k; i++)
            sf("%d",&a[i]);
        int u,w;
        for(int i=0; i<m; i++)
        {
            sf("%d %d",&u,&w);
            v[u].push_back(w);
        }
        for(int i=0;i<k; i++)
        {
            memset(vis,0,sizeof(vis));
            queue<int>q;
            q.push(a[i]);
            vector<int>::iterator it;
            vis[a[i]]=1;
            while(!q.empty())
            {
                int u=q.front();
                q.pop();
                res[u]++;
                for(it=v[u].begin(); it!=v[u].end(); it++)
                {
                    if(!vis[*it])
                    {
                        q.push(*it),vis[*it]=1;
                    }
                }
            }
        }
        int ans(0);
        for(int i=1;i<=n;i++)
        {
            if(res[i]==k)
                ans++;
        }
        pf("Case %d: %d\n",cs,ans);
        cs++;
    }
    return 0;
}
