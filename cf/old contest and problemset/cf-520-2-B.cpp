#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1000002
#define ll unsigned long long
int p[sz/2],v[sz],j;
void sieve()
{
    int n=1000000,l=1000;
    p[j++]=2;
    v[2]=0;
    for(int i=4;i<=n;i+=2)
         v[i]=1;
    for(int i=3;i<=n;i+=2)
    {
        if(!v[i])
        {
            p[j++]=i;
            if(i<=l)
            {
                for(int k=i*i;k<=n;k+=i*2)
                    v[k]=1;
            }
        }
    }
}
int pow(ll m,ll x)
{
    int sp(0);
    while(x<m)
        x=x*x,sp++;//cout<<x<<' '<<m<<endl;
    if(x!=m)
        sp++;
    return sp;
}
int main()
{
    faster
    sieve();
    int n,c=1;

    cin>>n;
    ll m=(ll)n;
    vector<int>vc;
    for(int i=0;i<j&&v[n];i++)
    {
        if(n%p[i]==0)
        {
            vc.push_back(p[i]);
            while(n%p[i]==0)
                n/=p[i];
        }
    }
    vc.push_back(n);
    for(auto i: vc)
        c*=i;

    ll x=(ll)c;
    int re=pow(m,x);
    cout<<c<<' '<<re<<'\n';
    return 0;
}
