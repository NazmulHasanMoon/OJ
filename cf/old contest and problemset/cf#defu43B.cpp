#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k,i,s,j(-1),x,y;
    cin>>n>>m>>k;
    i=0;
    s=n-1;
    while(s<k)
    {
        s+=(m-1);
        i++;
        j++;
    }
    if(i==0&&j==-1&&k)
    {
        cout<<k+1<<" 1\n";
        return 0;
    }
    if(i==0&&j==-1&&!k)
    {
        cout<<"1 1\n";
        return 0;
    }
    x=s-k;
    if(!(i&1))
    {
        y=(m-1)-x;
        m=m-y+1;
        cout<<(n-j)<<' '<<m<<'\n';
    }
    else
    {
        m=m-x;
        cout<<(n-j)<<' '<<m<<'\n';

    }
    return 0;
}
