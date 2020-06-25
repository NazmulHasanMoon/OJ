#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz 1000000000
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v;
    int t,h;
    v.pb(2);
    for(int i=5;v.back()<sz;i+=3)
        v.pb(i+v.back());
    cin>>t;
    int x=v.size();
    int ans;
    while(t--)
    {
        cin>>h;
        ans=0;
        int lw,hg;
        while(h>1)
        {
            lw=lower_bound(v.begin(),v.end(),h)-v.begin();
            if(h<v[lw])
                h-=v[lw-1];
            else
                h-=v[lw];
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
