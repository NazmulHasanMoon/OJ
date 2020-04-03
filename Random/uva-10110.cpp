#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p[65550],vis[65550],j(1);
int main()
{
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,x,l,y,a,w;
    p[0]=2;
    for(int i=4; i<=65540; i+=2)
        vis[i]=1;
    for(int i=3;i<=65540;i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            for(ll k=(ll)i*(ll)i; k<=65540; k+=(ll)i*2)
                vis[(int)k]=1;
        }
    }
    while(cin>>n)
    {
        if(!n)
            break;
        x=n;
        y=1;
        for(int i=0; i<j&&p[i]<=n; i++)
        {
            a=0;
            w=(ll)p[i];
            while(n%w==0)
            {
                a++;
                n/=w;
            }
            y*=(a+1);
        }
        if(y==1&&x!=1)
            y=2;
        if(y&1)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
