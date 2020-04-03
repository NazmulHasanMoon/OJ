#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define sf scanf
#define pf printf
vector<int>v[150];
char st[125][125];
map<char,int>mp;
int ww;
void dfs(int j,int s)
{
    int ll=mp[st[s]];
    if(ll!=0&&ll!=j+1&&ll!=j)
        return;
    else if(ll==j+1)
        j++;
    for(auto i:v[s])
        dfs(j,i);
}
int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,cs(1);
    sf("%d",&t);
    while(cs<=t)
    {
        int n,z(0),start;
        sf("%d",&n);
        bool vis[150];
        for(int i=0;i<130;i++)
            v[i].clear();
        memset(vis,0,sizeof(vis));
        for(int i=0; i<n; i++)
            sf("%s",st[i]);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(st[i][j]=='.'||isupper(st[i][j]))
                {
                    if((st[i][j+1]=='.'||isupper(st[i][j+1]))&&(j+1)<n)
                        v[z].push_back(z+1);
                    if((st[i+1][j]=='.'||isupper(st[i+1][j]))&&i+1<n)
                        v[z].push_back(z+n);
                    if((st[i+1][j+1]=='.'||isupper(st[i+1][j+1]))&&i+1<n&&j+1<n)
                        v[z].push_back(z+n+1);
                    if((st[i+1][j-1]=='.'||isupper(st[i+1][j-1]))&&i+1<n&&j-1>=0)
                        v[z].push_back(z+n-1);
                    if((st[i-1][j+1]=='.'||isupper(st[i-1][j+1]))&&i-1>=0&&j+1<n)
                        v[z].push_back(z+1-n);
                    if((st[i][j-1]=='.'||isupper(st[i][j-1]))&&j-1>=0)
                        v[z].push_back(z-1);
                    if((st[i-1][j-1]=='.'||isupper(st[i-1][j-1]))&&i-1>=0&&j-1>=0)
                        v[z].push_back(z-n-1);
                    if((st[i-1][j]=='.'||isupper(st[i-1][j]))&&i-1>=0)
                        v[z].push_back(z-n);
                    if(st[i][j]=='A')
                        start=z;
                    if(isupper(s[i][j]))
                        mp[s[i][j]]=(int)(s[i][j]-'A')+1;
                    else
                        mp[s[i][j]]=0;
                }
                z++;
                // cout<<z<<endl;
            }
        }
        dfs(1,start);

    }
    return 0;

}
