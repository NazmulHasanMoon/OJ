#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int,int>
#define ff first
#define ss second
#define sz 200001
vector<pair<int,int>>v[sz];
vector<int>res;
vector<vector<int>>ans;
int taken[sz],j,k;
bool flag;
void dfs(int u,int n)
{
    if(k==n)
    {
        ans.pb(res);
        ++j;
        return;
    }
    if(u>n)return;
    int x,y;
    x=v[u][0].ff;
    y=v[u][0].ss;
    for(int i=x;i<=y;i++)
    {
        if(!taken[i])
        {
            taken[i]=1;
            res.pb(i);
            k++;
            dfs(u+1,n);
            if(j==2)return;
            res.pop_back();
            k--;
            taken[i]=0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,a,b,x;
    cin>>n;
    flag=true;
    x=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        v[i].pb({a,b});
        if(b-a)x++;
    }
    if(x==n)flag=false;
    dfs(1,n);
    if(!flag||ans.size()>1)
    {
        cout<<"NO\n";
        for(int i=0;i<2;i++)
        {
            for(auto j: ans[i])
                cout<<j<<' ';
            cout<<"\n";
        }
        return 0;
    }
    cout<<"YES\n";
    for(auto j: ans[0])
        cout<<j<<' ';
    cout<<"\n";
    return 0;
}
