#include<bits/stdc++.h>
using namespace std;
int par[5003],prz[5003];
int root(int i)
{
    while(par[i]!=i)
    {
        par[i]=par[par[i]];
        i=par[i];
    }
    return i;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c,r;
    while(1)
    {
        cin>>c>>r;
        if(!c&&!r)
            break;
        string s,ss;
        map<string,int>mp;
        int re=1;
        memset(par,0,sizeof(par));
        memset(prz,0,sizeof(prz));
        for(int i=1; i<=c; i++)
        {
            cin>>s;
            mp[s]=i;
            par[i]=i;
            prz[i]=1;
        }
        for(int i=0; i<r; i++)
        {
            cin>>s>>ss;
            int x=root(mp[s]);
            int y=root(mp[ss]);
            //cout<<x<<' '<<y<<' '<<mp[s]<<' '<<mp[ss]<<endl;
            if(x!=y)
            {
                if(prz[x]<prz[y])
                {
                    par[x]=par[y];
                    prz[y]+=prz[x];
                    re=max(re,prz[y]);
                }
                else
                {
                    par[y]=par[x];
                    prz[x]+=prz[y];
                    re=max(re,prz[x]);
                }
            }
            //cout<<re<<endl;
        }
        cout<<re<<'\n';
    }
    return 0;
}
