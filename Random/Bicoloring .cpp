#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
#define ll long long
int main()
{
    while(1)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n,e;
        cin>>n;
        if(n==0)
            break;
        cin>>e;
        vector<int>v[203];
        int cl[203],vis[203],x,y;
        memset(cl,0,sizeof(cl));
        memset(vis,0,sizeof(vis));
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        queue<int>q;
        q.push(0);
        cl[0]=1;
        bool t=true;
        int z(0);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            if(!vis[u])
                vis[u]=1,z++;
            for(auto i:v[u])
            {
                //cout<<z<<"*"<<u<<' '<<i<<endl;
                if(cl[u]==cl[i]){
                    t=false;
                    break;
                }
                cl[i]=(cl[u]==1)?2:1;
                if(!vis[i])
                    q.push(i);
            }
            if(!t)
                break;
        }
        if(t)
            cout<<"BICOLORABLE.\n";
        else
            cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}
