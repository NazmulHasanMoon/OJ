#include<bits/stdc++.h>
using namespace std;
#define sz 1001
#define ff first
#define ss second
#define sf scanf
#define pf printf
vector<int>v[sz];
int x[sz],vis[sz];
map<int,int>mp;
int main()
{
    int n;
    sf("%d",&n);
    int i,j;
    for(i=2,j=0; i<=n; i++,j++)
    {
        sf("%d",&x[j]);
        v[x[j]].push_back(i);
        mp[x[j]]=1;
    }
    for(int i=0; i<j; i++)
    {
        if(!vis[x[i]])
        {
            vis[x[i]]=1;
            int c=0;
            //cout<<x[i]<<endl;
            for(auto k:v[x[i]])
            {
                c++;
                if(mp.find(k)!=mp.end())
                    c--;
            }
            //cout<<c<<endl;
            if(c<3)
            {
                pf("No\n");
                return 0;
            }
        }
    }
    pf("Yes\n");
    return 0;
}
