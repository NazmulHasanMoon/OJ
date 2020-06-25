#include<bits/stdc++.h>
using namespace std;
#define ss second
#define ff first
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 200
#define mx 500000000
#define ll long long
int a[sz],b[sz];
vector<pair<int,int>>v;
int main()
{
    faster
    int n,m,j(0);
    cin>>n>>m;
    if(n==m)
        return cout<<"0\n",0;
    int x=3;
    for(int i=1;i<30;i++)
        a[i]=1<<i,v.push_back({a[i],i});
    j=0;
    b[j++]=3;
    v.push_back({3,j});
    while(x<mx)
    {
        x*=3;
        b[j++]=x;
        v.push_back({x,j});
    }
    for(int i=1;i<30;i++)
    {
        for(int k=0;i<j;k++)
        {
            ll z=(ll)a[i]*(ll)b[k];
            if(z>mx)
                break;
            v.push_back({a[i]*b[k],i+k+1});
        }
    }
    /*for(auto i:v)
        cout<<i.ff<<'-';
    cout<<endl;*/
    sort(v.begin(),v.end());
    ll y;
    for(auto i:v)
    {
        ///cout<<i.ff<<endl;
        y=(ll)i.ff*(ll)n;
        if(y==(ll)m)
            return cout<<i.ss<<'\n',0;
              //return "-1"
        else if(y>(ll)m)
            return cout<<"-1\n",0;
    }
    return 0;
}
