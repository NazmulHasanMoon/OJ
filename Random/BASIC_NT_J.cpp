#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz 2000006
int phi[sz],lvl[sz];
void sievephi()
{
    int n=sz-6;
    int i,j;
    for(int i=1;i<=n;i++)
        phi[i]=i;
    for(int i=2;i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(j=i;j<=n;j+=i)
                phi[j]-=(phi[j]/i);
        }
    }
    lvl[1]=lvl[2]=1;
    int x;
    for(int i=3;i<=n;i++)
    {
        x=phi[i];
        lvl[i]++;
        while(x!=1)
        {
            lvl[i]++;
            x=phi[x];
        }
    }
}
int main()
{
    faster
    sievephi();
    int t,x,y;
    cin>>t;
    int s;
    while(t--)
    {
        s=0;
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        for(int i=x;i<=y;i++)
            s+=lvl[i];
        cout<<s<<'\n';
    }
    return 0;
}
