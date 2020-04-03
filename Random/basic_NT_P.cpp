#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pf printf
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    faster
    ll t,cs(1);
    cin>>t;
    ll n,b,d,m,x,y;
    while(cs<=t)
    {
        y=0;
        cin>>n>>b>>d>>m;
        x=m;
        bool ck=false;
        while(x!=0){
            if(x<10&&x<=d)
                ck=true;
            x/=10,y++;
        }
        ll z,i,u;
        u=d;
        if(!ck&&n>y)
            y++;
        while(--y)
            u=u*10+d;

        z=u%m;
        pf("Case %lld: ",cs++);
        cout<<z<<'\n';
    }
    return 0;
}
