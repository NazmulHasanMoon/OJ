#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1)
    {
        int x,y,re(0),z(0);
        sf("%d %d",&x,&y);
        if(x==0&&y==0)
            break;
        vector<int>v[10002];
        bool vis[10002];
        memset(vis,0,sizeof(vis));
        char st[x+2][y+2];
        int start;
        for(int i=0; i<x; i++)
            sf("%s",st[i]);//cout<<st[i]<<endl;;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                if(st[i][j]=='@')
                {
                    start=z,re++;
                    if(st[i][j+1]=='@'&&(j+1)<y)
                        v[z].push_back(z+1);
                    if(st[i+1][j]=='@'&&i+1<x)
                        v[z].push_back(z+y);
                    if(st[i+1][j+1]=='@'&&i+1<x&&j+1<y)
                        v[z].push_back(z+y+1);
                    if(st[i+1][j-1]=='@'&&i+1<x&&j-1>=0)
                        v[z].push_back(z+y-1);
                    if(st[i-1][j+1]=='@'&&i-1>=0&&j+1<y)
                        v[z].push_back(z+1-y);
                    if(st[i][j-1]=='@'&&j-1>=0)
                        v[z].push_back(z-1);
                    if(st[i-1][j-1]=='@'&&i-1>=0&&j-1>=0)
                        v[z].push_back(z-y-1);
                    if(st[i-1][j]=='@'&&i-1>=0)
                        v[z].push_back(z-y);
                }
                z++;
                // cout<<z<<endl;
            }
        }
        //vis[start]=1;
        for(int i=0;i<z;i++){
            stack<int>sk;
            int l;
            if(vis[i]==false)
            {
                sk.push(i);
                //cout<<sk.size()<<"*\n";
                while(!sk.empty())
                {
                    l=sk.top();
                    vis[l]=true;
                    sk.pop();
                    //cout<<l<<':';
                    for(auto vx:v[l])
                    {
                      //  cout<<vx<<' ';
                        if(!vis[vx])
                            sk.push(vx),re--,vis[vx]=1;
                    }
                    //cout<<endl;
                }

            }

        }
        cout<<re<<endl;
    }
    return 0;
}

