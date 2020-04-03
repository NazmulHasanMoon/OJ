#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1.0)
int main()
{
    int t,i(1);
    sf("%d",&t);
    double r,c,s;
    while(i<=t)
    {
        sf("%lf",&r);
        s=(r+r)*(r+r);
        c=pi*r*r;
        pf("Case %d: ",i++);
        cout<<setprecision(2)<<fixed<<s-c<<'\n';
    }
    return 0;
}
