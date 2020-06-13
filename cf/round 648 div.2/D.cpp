#include<bits/stdc++.h>
using namespace std;
int n,m;
bool flag,check,cc;
string s[51],s2[51];
void dfs(vector<vector<bool>>&vis,int x,int y)
{
    if(x==n-1&&y==m-1)
    {
        flag=true;
        return ;
    }
    if(x>=n||y>=m||x<0||y<0)
        return;
    if(s[x][y]=='#')
        return;
    if(vis[x][y])
        return;
    if(s[x][y]=='.')
    {
        s[x][y]='#';
        return;
    }
    if(s[x][y]=='G')cc=true;
    vis[x][y]=1;
    dfs(vis,x,y+1);
    dfs(vis,x-1,y);
    dfs(vis,x+1,y);
    dfs(vis,x,y-1);
}
bool can;
void dfs2(vector<vector<bool>>&vis,int x,int y)
{
    if(x==n-1&&y==m-1)
    {
        can=true;
        return ;
    }
    if(x>=n||y>=m||x<0||y<0)
        return;
    if(s[x][y]=='#')
        return;
    if(vis[x][y])
        return;
    if(s[x][y]=='B')return;
    vis[x][y]=1;
    dfs2(vis,x,y+1);
    dfs2(vis,x-1,y);
    dfs2(vis,x+1,y);
    dfs2(vis,x,y-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        flag=check=cc=can=false;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        vector<vector<bool>>v(n,vector<bool>(m,0));
        for(int i=0; i<n; i++)
            cin>>s[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='G')
                    check=true;
                else if(s[i][j]=='B'&&!vis[i][j]&&!flag)
                    dfs(vis,i,j);
                if(cc&&!flag){
                    check=flag=true;
                    break;
                }
            }
        }
        if((flag&&check))
        {
            cout<<"NO\n";
            continue;
        }
        if(check)
        {
            for(int i=0;i<n&&!flag;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(s[i][j]=='G'&&!v[i][j])
                    {
                        can=false;
                        dfs2(v,i,j);
                        ///cout<<i<<'-'<<j<<endl;
                        if(!can){
                            flag=true;
                            break;
                        }
                       /// can=false;
                    }
                }
            }
            if(flag)
                cout<<"NO\n";
            else
                cout<<"YES\n";
            continue;
        }
        cout<<"YES\n";
    }
    return 0;
}
