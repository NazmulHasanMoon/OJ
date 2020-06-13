#include<bits/stdc++.h>
using namespace std;
bool status[200001];
int a;
vector<int>primes;
void siv()
{
    int N=200000;
    int sq=sqrt(N);
    primes.push_back(2);
    for(int i=4; i<=N; i+=2)
        status[i]=1;
    for(int i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            primes.push_back(i);
            for(int j=i*i; j<=N; j+=i)
                status[j]=1;
        }
    }
}
map<int,int>lcm[2];
//set<pair<int,int>>lcm[2];
void pd(int x)
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
            lcm[0][i]=y;
    }
    if(x>1)
        lcm[0][x]=1;
}
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
            lcm[1][i]=y;
    }
    if(x>1)
        lcm[1][x]=1;
}
//set<int>g,gcd;
map<int,int>g,gcd,temp;
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
    cin>>n>>a;
    pd(a);
    ///cout<<a<<":\n";
    for(auto j:lcm[0])
        g[j.first]=j.second;///cout<<j.first<<' '<<j.second<<'\n';
    cin>>a;
    pdiv(a);
    ///cout<<a<<":\n";
    for(auto j:lcm[1])
    {
        ///cout<<j.first<<' '<<j.second<<'\n';
        if(g.find(j.first)!=g.end())
            g[j.first]=max(g[j.first],j.second);
        else
            g[j.first]=j.second;
    }
    for(i=2; i<n; i++)
    {
        cin>>a;
        if(i&1)
        {
            lcm[1].clear();
            pdiv(a);
            for(auto j:lcm[0])
                temp[j.first]=j.second;
            for(auto j:lcm[1])
            {
                ///cout<<j.first<<' '<<j.second<<'\n';
                if(temp.find(j.first)!=temp.end())
                    temp[j.first]=max(temp[j.first],j.second);
                else
                    temp[j.first]=j.second;
            }
            for(auto j:temp)
            {
                cout<<j.first<<' '<<j.second<<"@\n";
                if(g.find(j.first)!=g.end())
                    gcd[j.first]=min(j.second,g[j.first]);
            }
            g.clear();
            for(auto j:gcd)
                g[j.first]=j.second;
            gcd.clear();
            temp.clear();
        }
        else
        {
            lcm[0].clear();
            pd(a);
            for(auto j:lcm[1])
                temp[j.first]=j.second;
            for(auto j:lcm[0])
            {
                ///cout<<j.first<<' '<<j.second<<'\n';
                if(temp.find(j.first)!=temp.end())
                    temp[j.first]=max(temp[j.first],j.second);
                else
                    temp[j.first]=j.second;
            }
            for(auto j:temp)
            {
                cout<<j.first<<' '<<j.second<<"#\n";
                if(g.find(j.first)!=g.end())
                    gcd[j.first]=min(j.second,g[j.first]);
            }
            g.clear();
            for(auto j:gcd)
                g[j.first]=j.second;
            gcd.clear();
            temp.clear();
        }
    }
    long long ans=1;
    for(auto i:g)
        ans*=POW(i.first,i.second);
    cout<<ans<<'\n';
    return 0;
}
