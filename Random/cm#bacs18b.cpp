#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100001
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
int m,s(0);
vector<pair<int,int>>v;
bool comp(const pair<int,int>&x,const pair<int,int>&y)
{
    if(x.ff==y.ff||x.ss==y.ss)
        return 1;
    else if(x.ff<y.ff){
        if(x.ss<=y.ss)
            return 1;
        else
            return 0;
    }
    return 0;

}

int main()
{
    int t,n,x,y,j(1);
    sf("%d",&t);
    while(j<=t)
    {
        int p,q,ans=1e9;
        ans+=12;

        sf("%d %d",&n,&p);
        for(int i=0; i<n; i++)
        {
            sf("%d %d",&x,&y);
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),comp);
        vector<pair<int,int>>::iterator it,tt;
        q=p-1;
       /* for(auto i:v)
        {
            cout<<i.ff<<' '<<i.ss<<endl;
        }
        cout<<endl;*/
        for(it=v.begin(),tt=v.begin()+q; tt!=v.end();it++,tt++){
           ans=min(ans,abs(tt->ff - it->ss));
           //cout<<tt->ff<<' '<<it->ss<<'\n';
        }
        pf("Case %d: %d\n",j,ans);
        j++;
        v.clear();
    }
    return 0;
}

