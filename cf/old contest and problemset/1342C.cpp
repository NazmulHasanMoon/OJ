#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t,a,b,q,l,r,x,y,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        if(a>b)
            swap(a,b);
        ll lcm=(a*b)/__gcd(a,b);
        while(q--)
        {
            cin>>l>>r;
            if(lcm==b||r<b)
                cout<<"0 ";
            else if(r==b)cout<<"1 ";
            else
            {
                x=l/lcm;
                y=r/lcm;
                ll p=lcm*x;
                ll z=lcm*y;
                s=r;
                if(l<b)
                    s-=b-1;///cout<<s<<"#2#";
                else if(p+b-1>=l)
                    s-=p+b-1;
                else
                    s-=l-1;
                //cout<<s<<"#3#";
                p=y-x-1;
                s-=p*b;
                //cout<<s<<"#4#";
                if(z+b<=r)
                    s-=b;///cout<<s<<"#5#";
                else
                    s-=r-(z-1);///cout<<s<<"#6#";
                cout<<s<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}
