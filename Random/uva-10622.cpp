#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x,i,n,m;
    while(1)
    {
        cin>>n;
        bool w=true;
        if(n<0)
            n=-n,w=false;
        m=sqrt(n)+1;
        bool t=false;
        if(n==0)
            break;
        for(ll j=2; j<=m; j++)
        {
            x=j;
            for(i=1; x<n; i++){
                x*=j;
            }
            if((x==n&&w)||(x==n&&!w&&(i&1)))
            {
                t=true;
                break;
            }
        }
        if(t)
            cout<<i<<'\n';
        else
            cout<<"1\n";
    }
    return 0;
}
