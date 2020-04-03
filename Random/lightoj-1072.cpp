#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1.0)
int main()
{
    int t,i(1);
    double R,n,r;
    sf("%d",&t);
    while(i<=t)
    {
        sf("%lf %lf",&R,&n);
        r=(R*sin(pi/n))/(1+sin(pi/n));
        pf("Case %d: ",i++);
        cout<<setprecision(10)<<fixed<<r<<'\n';
    }
    return 0;
}
