#include<bits/stdc++.h>
using namespace std;
#define pb push_back
bool status[200001];
int a;
vector<int>primes;
vector<int>lcm[200001];
void siv()
{
    int N=200000;
    int sq=sqrt(N);
    primes.pb(2);
    for(int i=4; i<=N; i+=2)
        status[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            primes.pb(i);
            for(int j=i*i; j<=N; j+=i)
                status[j]=1;
        }
    }
}
bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)
        return true;
    else if(a.first==b.first)
        return a.second<=b.second;
    else
        return false;
}
map<int,int>g;
void pdiv(int x)
{
    int y=0;
    int k=0;
    for(int i=primes[0]; i*i<=x; i=primes[++k])
    {
        y=0;
        while(x%i==0)
        {
            x/=i;
            y++;
        }
        if(y)
            lcm[i].pb(y);
    }
    if(x>1)
        lcm[x].pb(1);
}
long long POW(int x,int y)
{
    long long z=(long long)x;
    while(--y)
        z=z*(long long)x;
    return z;
}
int main()
{
    siv();
    int n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        pdiv(a);
    }
    ///sort(lcm.begin(),lcm.end(),comp);
    long long ans=1;
    if(n==2)
    {
        for(int j=2;j<=200000;j++){
            if(!lcm[j].empty())
            {
                sort(lcm[j].rbegin(),lcm[j].rend());
                g[j]=lcm[j][0];
            }
        }
        for(auto i:g)
            ans*=POW(i.first,i.second);
        return cout<<ans<<'\n',0;
    }
    int x;
    ///int len=lcm.size();
    int u,v,p;
    for(int i=2;i<=200000;i++)
    {
        x=lcm[i].size();
        if(x>=n-1){
            sort(lcm[i].begin(),lcm[i].end());
            if(x==n-1)g[i]=lcm[i][0];
            else g[i]=lcm[i][1];
        }
    }
    ///long long ans=1;
    for(auto i:g)
        ans*=POW(i.first,i.second);
    cout<<ans<<'\n';
    return 0;
}

