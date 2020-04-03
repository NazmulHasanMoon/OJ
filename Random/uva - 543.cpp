#include<bits/stdc++.h>
using namespace std;
#define ll long long
int p[80000],vis[1000002];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int j(0);
    for(int i=2;i<=1000000;i+=2)
        vis[i]=1;
    for(int i=3;i<=1000000;i+=2)
    {
        if(!vis[i])
        {
            p[j++]=i;
            if(i<1000){
            for(int k=(i*i);k<=1000000;k+=i*2)
                vis[k]=1;
            }
        }
    }
    int t;
    while(1)
    {
        cin>>t;
        if(!t)
            break;
        bool f=false;
        int u,v;
        for(int i=0;i<j;i++)
        {
            u=p[i];
            v=t-p[i];
            if(u>v)
                break;
            if(!vis[u]&&!vis[v])
            {
                f=true;
                cout<<t<<" = "<<u<<" + "<<v<<'\n';
                break;
            }
        }
        if(!f)
            cout<<"Goldbach's conjecture is wrong.\n";
    }
    return 0;
}
