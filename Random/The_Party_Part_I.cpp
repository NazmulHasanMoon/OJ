#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    int t;
    char c;
    sf("%d%c",&t,&c);
    while(t--)
    {
        int p,d;
        sf("%d %d",&p,&d);
        vector<int>v[1001];
        int vis[1001],lvl[1001],x,y;
        memset(lvl,0,sizeof(lvl));
        for(int i=0;i<d;i++){
            sf("%d %d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        vector<int>::iterator it;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int i=q.front();
            q.pop();
            for(it=v[i].begin();it!=v[i].end();it++)
            {
                if(!lvl[*it])
                    lvl[*it]=lvl[i]+1,q.push(*it);
            }
        }
        for(int i=1;i<p;i++)
            pf("%d\n",lvl[i]);
        if(t>=1)
            pf("\n");
    }
    return 0;
}
