#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pii pair<int,int>
#define ff first
#define ss second
vector<pii>v;
int main()
{
    faster
    int n;
    long long d,x,y,z(0),ans(0);
    cin>>n>>d;
    for(int i=0; i<n; i++)cin>>x>>y,v.push_back({x,y});

    sort(v.begin(),v.end());
    deque<pii>de;
    de.push_back({v[0].ff,v[0].ss});
    z=v[0].ss;
    int u;
    for(int i=1;i<n;i++)
    {
        u=v[i].ff;
        if(u-de.front().ff>=d)
        {
            ans=max(ans,z);
           // cout<<de.front().ff<<endl;
            while(!de.empty())
            {
                if(u-de.front().ff<d)
                    break;
                //cout<<de.front().ss<<' ';
                z-=de.front().ss;
                de.pop_front();
            }
            //cout<<endl;
            z+=v[i].ss;
            //cout<<v[i].ff<<"!\n";
            de.push_back({v[i].ff,v[i].ss});
            ans=max(ans,z);
        }
        else
        {
            de.push_back({v[i].ff,v[i].ss});
            z+=v[i].ss;
        }
    }
   // cout<<z<<endl;
    ans=max(ans,z);
    cout<<ans<<'\n';
    return 0;
}
