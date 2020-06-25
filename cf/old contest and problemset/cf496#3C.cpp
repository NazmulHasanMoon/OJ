#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 120001
#define ff first
#define ss second
#define pi acos(-1.0)
#define ll long long
#define all(a) a.begin(),a.end()
#define mem(a,v) memset((a), v, sizeof(a))
#define faster   ios_base::sync_with_stdio(0);cin.tie(0);
#define pb   push_back
vector<int>v;
map<int,int>mp;
int a[sz];
int main()
{
    faster
    int n,ans;
    for(int i=1; i<31; i++)
        v.pb(1<<i);
    cin>>n;
    ans=0;
    bool ck=true;
    for(int i=0; i<n; i++)
        cin>>a[i],mp[a[i]]++;
    vector<int>::iterator it;
    for(int i=0; i<n; i++)
    {
        ck=true;
        for(auto j:v)
        {
            if(a[i]<j)
            {
                if(mp.find(j-a[i])!=mp.end())
                {
                    if(j-a[i]==a[i]&&mp[a[i]]==1)
                        ck=true;
                    else
                    {
                        ck=false;
                        //cout<<a[i]<<' ';
                        break;
                    }
                }
            }
        }
        if(ck)
            ans++;
    }
    cout<<ans<<'\n';
    return 0;
}

