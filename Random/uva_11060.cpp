#include<bits/stdc++.h>
using namespace std;
#define sz 101
#define ss second
#define ff first
vector<int>v1,v[sz];
vector<pair<int,pair<int,int> > >re;
int c,deg[sz],n;
int indeg()
{
    int x;
    for(int i=1;i<=n;i++)
    {
        if(deg[i]==0){
            x=i;
            deg[i]=-1;
            for(auto j: v[x])
                deg[j]--;
            break;
        }
    }
    return x;
}
int main()
{
    int k(1);
    while(cin>>n)
    {
        string s;
        memset(deg,0,sizeof(deg));
        int j(0);
        map<string,int>mp;
        map<int,string>mmp;
        mp.clear();
        mmp.clear();
        //vector<string>vv,vvv;
        for(int i=1;i<101;i++)
            v[i].clear();
        for(int i=0;i<n;i++)
        {
             cin>>s;
             //vv.push_back(s);
             if(!(mp.find(s)!=mp.end()))
                mp[s]=++j,mmp[j]=s;
        }
        int e;
        cin>>e;
        string x,y;
        for(int i=1;i<=e;i++)
        {
            cin>>x>>y;
            v[mp[x]].push_back(mp[y]);
            deg[mp[y]]++;
        }
        cout<<"Case #"<<k<<": Dilbert should drink beverages in this order:";
        for(int i=1;i<=n;i++)
        {
            int u;
            u=indeg();
            cout<<" "<<mmp[u];
        }
        printf(".\n\n");
        k++;
    }
    return 0;

}
