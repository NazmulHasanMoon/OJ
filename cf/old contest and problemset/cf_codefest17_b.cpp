#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define sz 100000
int a[sz];
int main()
{
    int n,l(0),y,u;
    long long int p,q,r,x,z,s(0),mx=-1e18;
    sf("%I64d%I64d%I64d%I64d",&n,&p,&q,&r);
    for(int i=0;i<n;i++){
        sf("%d",&a[i]);
        x=max(max(a[i]*p,a[i]*q),a[i]*r);
        if(mx<x)
            mx=x,l=i,y=a[i];
    }
    z=mx/y;
    //cout<<mx<<' '<<z<<endl;
    s+=mx;
    if(z==p)
    {
        mx=-1e18;
        for(int i=l;i<n;i++)
        {
            x=max(a[i]*q,a[i]*r);
            if(mx<x)
                mx=x,u=i,y=a[i];
        }
        z=mx/y;
        s+=mx;
        if(z==q)
        {
            x=a[u]*r;
            for(int i=u+1;i<n;i++)
                x=max(a[i]*r,x);
        }
        else
        {
            x=a[l]*q;
            for(int i=l+1;i<=u;i++)
                x=max(a[i]*q,x);
        }
        s+=x;
    }
    else if(z==q)
    {
        x=a[0]*p;
        for(int i=1;i<=l;i++)
            x=max(a[i]*p,x);
        s+=x;
        x=a[l]*r;
        for(int i=l+1;i<n;i++)
            x=max(x,a[i]*r);
        s+=x;
    }
    else
    {
        mx=-1e18;
        for(int i=0;i<=l;i++)
        {
            x=max(a[i]*q,a[i]*p);
            if(mx<x)
                mx=x,u=i,y=a[i];
        }
        s+=mx;
        z=mx/y;
        //cout<<mx<<' '<<z<<endl;
        if(z==p)
        {
            x=a[u]*q;
            for(int i=u+1;i<=l;i++)
                x=max(x,a[i]*q);
        }
        else
        {
            x=a[0]*p;
            for(int i=1;i<=u;i++)
                x=max(x,a[i]*p);
        }
        s+=x;
    }
    pf("%I64d\n",s);
    return 0;
}
