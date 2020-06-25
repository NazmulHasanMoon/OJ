#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ff first
#define ss second
#define sz 200002
int a[sz];
unordered_map<int,int>mp;
int main()
{
    faster
    int n,mx(1),x;
    ll re(0);
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i],mp[a[i]]++;
    x=a[1];
    for(auto i:mp)
    {
        if(mx<i.ss)
            mx=i.ss,x=i.ff;
    }
    vector<pair<int,pair<int,int>>>v;
    int y;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==x)
        {
            for(int j=i-1;j>=1;j--)
            {
                if(a[j]!=a[i])
                {
                    if(a[j]>a[i])
                        v.push_back({2,{j,j+1}});
                    else
                        v.push_back({1,{j,j+1}});
                    re++;
                }
            }
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]!=a[i])
                {
                    if(a[j]>a[i])
                        v.push_back({2,{j,j-1}});
                    else
                        v.push_back({1,{j,j-1}});
                    re++;
                }
            }
            break;
        }

    }
    cout<<re<<'\n';
    for(auto i:v)
        cout<<i.ff<<' '<<i.ss.ff<<' '<<i.ss.ss<<'\n';
    return 0;
}
