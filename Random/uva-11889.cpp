#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 3250
int p[sz],v[sz],j,x,y;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,c,t,b,z;
    cin>>t;
    p[j++]=2;
    for(int i=4;i<sz;i+=2)
        v[i]=1;
    for(int i=3;i<sz;i+=2)
    {
        if(!v[i])
        {
            p[j++]=i;
            if(i<=57)
            {
                for(int k=i*i;k<sz;k+=i*2)
                    v[k]=1;
            }
        }
    }
    map<int,int>v1,v2;
    while(t--)
    {
        cin>>a>>c;
        b=1;
        v1.clear();
        if(c%a)
            cout<<"NO SOLUTION\n";
        else
        {
            for(int i=0;p[i]<=a&&i<j;i++)
            {
                int k=1;
                if(a%p[i]==0)
                {
                    while(a%p[i]==0)
                    {
                        k*=p[i];
                        a/=p[i];
                    }
                    v1[k]=1;
                }
            }
            if(a>1)
                v1[a]=1;
            for(int i=0;p[i]<=c&&i<j;i++)
            {
                int k=1;
                if(c%p[i]==0)
                {
                    while(c%p[i]==0)
                    {
                        k*=p[i];
                        c/=p[i];
                    }
                    if(!(v1.find(k)!=v1.end()))
                        b*=k;
                }
            }
            if(c>1&&v1[c]!=1)
                b*=c;
            cout<<b<<'\n';
        }
    }
    return 0;
}
