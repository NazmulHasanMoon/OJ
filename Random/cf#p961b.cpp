#include<bits/stdc++.h>
using namespace std;
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define sz 100005
#define ff first
#define ss second
int a[sz],sum,ans,re;
vector< pair<int,int> >v;
deque<int>de;
int main()
{
    faster
    int n,k,x,j(0);
    cin>>n>>k;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(!x)
            v.push_back({a[i],i}),j++;
        else
            sum+=a[i];
    }
    if(j)
    {
        de.push_back(v[0].ss);
        re+=v[0].ff;
        ans=max(ans,re);
        int y,z;
        for(int i=1; i<j; i++)
        {
            y=v[i].ss;
            if(y-de.front()<k)
            {
                re+=v[i].ff;
                de.push_back(v[i].ss);
            }
            else
            {
                ans=max(ans,re);
                while(!de.empty()&&y-de.front()>=k)
                {
                    re-=a[de.front()];
                    de.pop_front();
                }
                de.push_back(v[i].ss);
                re+=v[i].ff;
            }
        }
        ans=max(ans,re);
    }
    cout<<ans+sum<<'\n';
    return 0;
}
