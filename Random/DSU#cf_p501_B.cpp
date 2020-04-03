#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define sz 2002
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
unordered_map<string,int>siz;
unordered_map<string,string>par,child,res;
string root(string x)
{
    while(par[x]!=x)
    {
        par[x]=par[par[x]];
        x=par[x];
    }
    return x;
}
void weighted_union(string x,string y)
{
    string root_A=root(x);
    string root_B=root(y);
    if(siz[root_A]<siz[root_B])
    {
        par[root_A]=par[root_B];
        child[root_B]=child[root_A];
        siz[root_B]+=siz[root_A];
    }
    else
    {
        par[root_B]=par[root_A];
        child[root_A]=child[root_B];
        siz[root_A]+=siz[root_B];
    }
}
void initialize(int N)
{
    for(int i=0;i<N;i++)
    {
        string x,y;
        cin>>x>>y;
        if(par.find(x)==par.end())
            par[x]=x;
        par[y]=x;
        child[par[x]]=y;
        siz[x]++;
        siz[y]++;
        weighted_union(x,y);
    }
}
int main()
{
    faster
    int n,c(0);
    cin>>n;
    initialize(n);
    for(auto i:par)
    {
        if(i.ff==i.ss)
            res[i.ff]=child[i.ff],c++;
    }
    cout<<c<<endl;
    for(auto i:res)
        cout<<i.ff<<' '<<i.ss<<'\n';
    return 0;
}
