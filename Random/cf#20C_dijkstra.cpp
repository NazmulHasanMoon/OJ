#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first

typedef long long ll;
#define sz 100003
#define pii pair<ll,ll>
vector<pii>v[sz];
ll par[sz],d[sz];
int main()
{
    ll n,e,x,y,c;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input2.txt","r",stdin);
    cin>>n>>e;
    //map<int,int>d;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y>>c;
        v[x].push_back({y,c});
        v[y].push_back({x,c});
        d[x]=1e18;
        d[y]=1e18;
    }
    //deque<pair<int,int>>q;
    priority_queue<int>q;
    //q.push_back({0,1});
    q.push(1);
    d[1]=0;
    par[1]=1;
    //int cl(0);
    while(!q.empty())
    {
        //int u=q.front().ss;
        //cout<<u<<"*\n";
        ll u=q.top();
        //q.pop_front();
        q.pop();
        //int l(0);
        for(auto i:v[u])
        {
            if(d[u]+i.ss<d[i.ff])
            {
                d[i.ff]=d[u]+i.ss;
                par[i.ff]=u;
                //q.push_back({d[i.ff],i.ff});
                q.push(i.ff);
                //l++;
            }
        }
        //int l=q.size();
        //cout<<q.size()<<endl;
        /*for(auto i:q)
            cout<<q[i]<<"=";
        cout<<endl;*/
       // sort(q.begin()+cl,q.end());
        /*for(auto i:q)
            cout<<i.ff<<"="<<i.ss<<'&';
        cout<<endl;*/
       // cl=l-1;
    }
    if(par[n]==0)
    {
        cout<<"-1\n";
        return 0;
    }
        ll j=0;
        //r.push_back(n);
        d[j]=n;
        ll f=n;
        while(par[f]!=f)
        {
            d[++j]=par[f];
           //r.push_back(par[f]);
           f=par[f];
        }
        for(ll k=j;k>=0;k--)
            cout<<d[k]<<' ';

    return 0;
}
