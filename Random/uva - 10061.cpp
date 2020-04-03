#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 1048578
double a[sz];
int p[sz/2],v[sz],j,zz=sz-2;
void sieve()
{
    p[j++]=2;
    long long w;
    for(int i=4; i<=zz; i+=2)
        v[i]=1;
    for(int i=3; i<=zz; i+=2)
    {
        if(!v[i])
        {
            p[j++]=i;
            if(i<=1024)
            {
                for(int k=(i*i); k<zz; k+=i*2)
                    v[k]=1;
            }
        }
    }

}
int main()
{
    faster
    int l=sz-2;
    a[1]=0;
    double z;
    z=0.0;
    for(int i=2; i<=l; i++)
    {
        z+=log10((double)i);
        a[i]=z;
    }
    sieve();
    int x,b,mx;
    while(cin>>x>>b)
    {
        int t,q,tt,v=b,k,zero,digit,s,temp;
        digit=0;
        zero=INT_MAX;
        mx=-1;
        for(int i=0; p[i]<=v&&i<j; i++)
        {
            k=s=0;
            if(v%p[i]==0)
            {
                while(v%p[i]==0)
                {
                    v/=p[i];
                    k++;
                }
                temp = x;
                //cout<<temp<<endl;
                while(temp>=p[i])
                    temp /= p[i],s+=temp;
                zero = min(zero, s/k);
            }
        }
        //cout<<s<<endl;
        if(b>1)
            digit=(int)ceil(a[x]/log10(b*1.0)+1e-10);
        else
            digit=INT_MIN,zero=0;
        cout<<zero<<' '<<digit<<'\n';
    }
    return 0;
}
