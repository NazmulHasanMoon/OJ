#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ss second
#define ff first
int dp[100001],par[100001];
bool vis[100001];
int main()
{
    int n,w(1);
    while(sf("%d",&n)!=EOF)
    {
        pf("Case %d:\n",w++);
        n--;
        if(!n)
            pf("0");
        else
        {
            int x,y,cnt(0);
            vector<int>v[100001];
            for(int i=0; i<n; i++)
            {
                sf("%d %d",&x,&y);
                //cin>>x>>y;
                dp[x]=dp[y]=0;
                vis[x]=vis[y]=false;
                v[x].push_back(y);
                par[y]=x;
                //par[x]=x;

            }
            n++;
            for(int i=1; i<=n; i++)
            {
                int l;
                stack<int>sk;
                if(vis[i]==false)
                {
                    sk.push(i);
                    //cout<<sk.size()<<"*\n";
                    while(!sk.empty())
                    {
                        l=sk.top();
                        vis[l]=true;
                        sk.pop();
                        for(auto vx:v[l])
                        {
                            if(vis[vx]==true)
                                dp[l]+=dp[vx];
                            else
                                sk.push(vx),dp[l]++;
                        }

                    }
                }
                //pf("%d*",dp[i]);
            }
            //pf("\n");
            for(int i=n; i>=1; i--)
                dp[par[i]]+=dp[i];
            for(int i=1; i<=n; i++)
                pf("%d ",dp[i]);
        }
        pf("\n");
    }
    return 0;
}
