#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q[1000002];
int par[1000002],a[1000002];
int root(int i)
{
    while(par[i]!=i)
    {
        par[i]=par[par[i]];
        i=par[i];
    }
    return i;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,x,y,u,v;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        par[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        u=root(x);
        v=root(y);
        //cout<<u<<'*'<<v<<endl;
        if(u!=v)//check & make union
        {
           if(u>v)
                par[u]=par[v];
           else
                par[v]=par[u];
        }
        //cout<<par[u]<<'*'<<par[v]<<endl;
    }
    for(int i=1;i<=n;i++)
        q[root(par[i])].push(a[i]);//check root frnd && push value
    for(int i=1;i<=n;i++)
    {
        while(!q[root(i)].empty())
        {
            cout<<q[root(i)].top()<<' ';
            q[root(i)].pop();
            break;
        }
    }
    return 0;
}
