#include<bits/stdc++.h>
using namespace std;
int par[100005],prz[100005];
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string ch,cc;
        map<string,int>mp;
        memset(par,0,sizeof(par));
        memset(prz,0,sizeof(prz));
        for(int i=0,j=1;i<n;i++)
        {
            cin>>ch>>cc;
            int x,y;
            if(!(mp.find(ch)!=mp.end()))
                mp[ch]=j,par[j]=j,prz[j]=1,j++;
            if(!(mp.find(cc)!=mp.end()))
                mp[cc]=j,par[j]=j,prz[j]=1,j++;
            x=root(mp[ch]);
            y=root(mp[cc]);
            if(x!=y)
            {
                if(prz[x]<prz[y])
                    par[x]=par[y],prz[y]+=prz[x];
                else
                    par[y]=par[x],prz[x]+=prz[y];
            }
            cout<<max(prz[x],prz[y])<<'\n';
        }
    }
    return 0;
}
