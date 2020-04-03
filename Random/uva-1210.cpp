#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 10002
int p[sz/2],vis[sz],j;
void sieve()
{
    p[j++]=2;
    for(int i=4;i<10001;i+=2)
        vis[i]=1;
    for(int i=3;i<10001;i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<=100)
            {
                for(int k=i*i;k<10001;k+=i*2)
                    vis[k]=1;
            }
        }
    }
}
int main()
{
    ll n,a;
    map<ll,ll>mp;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    a=2;
    mp[p[0]]++;
    int x;
    for(int i=1;i<j;i++)
    {
        a+=(ll)p[i];
        if(a<=10000)
            mp[a]++;//cout<<a<<endl;;
        n=a;
        for(int k=0;k<i;k++){
            n-=(ll)p[k];
            if(n<=10000)
                mp[n]++;//cout<<n<<endl;
        }
    }
    while(cin>>x)
    {
        if(!x)
            break;
        cout<<mp[x]<<"\n";
    }
    return 0;
}
