#include<bits/stdc++.h>
using namespace std;

#define sz 70
int p[sz/2],vis[sz],j;
void sieve()
{
    p[j++]=2;
    for(int i=4; i<51; i+=2)
        vis[i]=1;
    for(int i=3; i<51; i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<=8)
            {
                for(int k=i*i; k<51; k+=i*2)
                    vis[k]=1;
            }
        }
    }
}
int main()
{
    int n,a,t,ss;
    int mn;
    map<int,int>mp;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    for(int i=1; i<=50; i++)
        mp[i]=20;
    ss=1<<j;
    for(int i=1; i<=ss; i++)
    {
        int z=i,l,ll,s(0);
        vector<int>v;
        while(z)
        {
            v.push_back(z%2);
            z/=2;
        }
        l=v.size();
        ll=0;
        for(int k=0; k<l; k++)
        {
            if(v[k]==1)
                s+=p[k],ll++;
        }
        mp[s]=min(mp[s],ll);
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(mp[n]==20)
            cout<<"-1\n";
        else
            cout<<mp[n]<<'\n';
    }
    return 0;
}
