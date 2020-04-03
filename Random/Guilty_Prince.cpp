#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
int main()
{
    int t,l(1);
    sf("%d",&t);
    while(l<=t)
    {
        int x,y,re(0),z(0);
        sf("%d %d",&x,&y);
        // getchar();
        vector<int>v[500];
        int vis[500];
        memset(vis,0,sizeof(vis));
        char st[y+2][x+2];
        int start;
        for(int i=0; i<y; i++)
            sf("%s",st[i]);//cout<<st[i]<<endl;;
        //printf("%s\n",st[0]);
        for(int i=0; i<y; i++)
        {
            for(int j=0; j<x; j++)
            {
                if((st[i][j]=='.'||st[i][j]=='@')&&(st[i][j+1]=='.'||st[i][j+1]=='@')&&(j+1)<x)
                    v[z].push_back(z+1),v[z+1].push_back(z);
                if((st[i][j]=='.'||st[i][j]=='@')&&(st[i+1][j]=='.'||st[i+1][j]=='@')&&i+1<y)
                    v[z+x].push_back(z),v[z].push_back(z+x);
                if(st[i][j]=='@')
                    start=z,re++;
                z++;
               // cout<<z<<endl;
            }
        }
        /*for(int i=0;i<x*y;i++)
        {
            for(auto j:v[i])
                cout<<j<<' ';
            cout<<endl;
        }*/
        vis[start]=1;
        //cout<<start<<endl;
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            vector<int>::iterator it;
            for(it=v[u].begin(); it!=v[u].end(); it++)
            {
                if(!vis[*it])
                {
                    q.push(*it);
                    vis[*it]=1;
                    re++;
                }
            }
        }
        pf("Case %d: %d\n",l,re);
        l++;
    }
    return 0;
}
