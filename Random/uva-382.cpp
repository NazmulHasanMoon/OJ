#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p[5000],vis[5000],j(1);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    p[0]=2;
    for(int i=4; i<=245; i+=2)
        vis[i]=1;
    for(int i=3; i<=245; i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            for(ll k=(ll)i*(ll)i; k<=245; k+=(ll)i*2)
                vis[(int)k]=1;
        }
    }
    int n,x,k(0);
    ll re,y;
    bool t;
    while(cin>>n)
    {
        x=n;
        re=1;
        t=false;
        if(!k)
            cout<<"PERFECTION OUTPUT\n",k=1;
        if(!n)
        {
            cout<<"END OF OUTPUT\n";
            break;
        }
        for(int i=0; i<j&&p[i]<=n; i++)
        {
            int c(0);
            if(n%p[i]==0&&!t)
                t=1;
            while(n%p[i]==0)
            {
                c++;
                n/=p[i];
            }
            if(c)
            {
                y=1;
                for(int k=0; k<=c; k++)
                    y*=(ll)p[i];
                re*=((y-1)/((ll)p[i]-1));
            }
        }
        if(t||x==1)
            re-=x;
        else
            re=1;
        if(x<10)
            cout<<"    ";
        else if(x>=10&&x<100)
            cout<<"   ";
        else if(x>=100&&x<1000)
            cout<<"  ";
        else if(x>=1000&&x<10000)
            cout<<' ';
        if(re==x)
            cout<<x<<"  PERFECT\n";
        else if(re<x)
            cout<<x<<"  DEFICIENT\n";
        else if(re>x)
            cout<<x<<"  ABUNDANT\n";
    }
    return 0;
}
