#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 40002
vector<int>vec[sz];
queue<int>Q;
int lv[sz];
bool vis[sz];
int main()
{
    faster
    int n,m,u,y;
    cin>>n>>m;
    if(m>n)
    {
        int x=m;
        vec[1].pb(2);
        for(int i=2; i<=x; i++)
        {
            y=i*2;
            vec[i].pb(i-1);
            vec[i].pb(y);
            if(y>x)
                vec[y].pb(y-1);
        }

        lv[n]=0;
        vis[n]=1;
        Q.push(n);
        while(!Q.empty())
        {
            u=Q.front();
            Q.pop();
            for(auto j:vec[u])
            {
                if(!vis[j])
                {
                    lv[j]=lv[u]+1;
                    // cout<<lv[u]<<'-'<<u<<':'<<lv[j]<<'-'<<j<<endl;
                    Q.push(j);
                    vis[j]=1;
                }
            }
        }
        cout<<lv[m]<<'\n';
    }
    else
         cout<<n-m<<'\n';
    return 0;
}
