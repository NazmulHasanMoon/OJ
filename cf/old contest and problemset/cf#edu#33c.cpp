#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
bool vis[100001];
int a[100001],mn;
vector<int>v[100001];
void dfs(int i)
{
    mn=min(a[i],mn);
    vis[i]=1;
    for(auto j:v[i]){
        if(vis[j]==0)
            dfs(j);
    }
}
int main()
{
    int n,m;
    long long s(0);
    sf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        sf("%d",&a[i]);
    for(int i=0;i<m;i++)
    {
        int x,y;
        sf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        mn=INT_MAX;
        if(vis[i]==false)
            dfs(i),s+=mn;
    }
    pf("%I64d\n",s);
    return 0;

}
