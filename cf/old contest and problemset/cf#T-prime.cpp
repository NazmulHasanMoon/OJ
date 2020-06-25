#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define sz 1000002
int v[sz];
map<int,int>p;
int main()
{
    int t,j,l=sqrt(sz*1.0)+2;
    p[2]=4;
    for(int i=4;i<sz;i+=2)
        v[i]=i;
    for(int i=3;i<=sz;i+=2)
    {
        if(!v[i])
        {
            p[i]=i;
           // cout<<i<<endl;
            if(i<=l)
            {
                for(int j=i*i;j<=sz;j+=i*2)
                    v[j]=1;
            }
        }
    }
    sf("%d",&t);
    while(t--)
    {
        ll x;
        sf("%I64d",&x);
        double y=sqrt(x+0.0);
        int z=(int)y;
        if(z<y)
            z++;
        ll w=(ll)z*(ll)z;
       // cout<<y<<'-'<<z<<'-'<<w<<endl;
        if(w!=x)
            pf("NO\n");
       // cout<<y<<'-'<<z<<endl;
        else if(p.find(z)!=p.end())
            pf("YES\n");
        else
            pf("NO\n");
    }
    return 0;
}
