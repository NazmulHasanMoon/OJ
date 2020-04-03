#include<bits/stdc++.h>
using namespace std;
#define case(x) cout<<"Case "<<x<<": "
int main()
{
    int T,cs(1);
    cin>>T;
    bool ck;
    double v1,v2,v3,a1,a2,d,t,x,y,z;
    while(cs<=T)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t=max(v1/(0.0+a1),v2/(0.0+a2));
        x=t*v3;
        d=((v1*v1)/(2.0*a1))+((v2*v2)/(2.0*a2));
        case(cs++);
        cout<<fixed<<setprecision(7)<<d<<' '<<x<<'\n';
    }
    return 0;
}
