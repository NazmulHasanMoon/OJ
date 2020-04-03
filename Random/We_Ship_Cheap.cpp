#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
map<string,string>rrr;
void path(string f,string s)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    if(f==s)
        return;
    path(rrr[f],s);
    cout<<rrr[f]<<' '<<f<<'\n';
}
int main()
{
    int n,e;
    int w(0);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(cin>>e)
    {
        if(w)
            cout<<'\n';
        w=1;
        rrr.clear();
        map<string,int>vis;
        map<string,vector<string> >vc;
        string u,v;
        int x(0);
        int ll,ww;
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            vc[u].push_back(v);
            vc[v].push_back(u);
            vis[u]=0,vis[v]=0;
        }
        string s,f;
        cin>>s>>f;
        vis[s]=1;
        queue<string>q;
        q.push(s);
        while(!q.empty())
        {
            string u=q.front();
            q.pop();
            for(auto i:vc[u])
            {
                if(!vis[i])
                {
                    q.push(i);
                    vis[i]=1;
                    rrr[i]=u;
                }
            }
        }
        if(vis[f]==0)
            cout<<"No route\n";
        else
            path(f,s);
    }
    return 0;
}
