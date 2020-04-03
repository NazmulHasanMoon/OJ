#include<bits/stdc++.h>
using namespace std;
#define case(x) cout<<"Case "<<x<<": "
int main()
{
    int t,cs(1),p,q,r;
    cin>>t;
    long long a,b,c,x,y,xc;

    while(cs<=t)
    {
        x=y=xc=0;
        cin>>p>>q>>r;
        while(r--)
        {
            cin>>a>>b>>c;
            x+=(a*c);
            y+=(b*c);
            xc+=c;
        }
        x/=xc;
        y/=xc;
        case(cs++);
        cout<<x<<' '<<y<<'\n';
    }
    return 0;
}
