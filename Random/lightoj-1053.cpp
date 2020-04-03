#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t,i(1);
    sf("%d",&t);
    int a,b,c,x;
    while(i<=t)
    {
        sf("%d %d %d",&a,&b,&c);
        bool t=true;
        if(a>=b&&a>=c)
        {
            if((b*b+c*c)!=a*a)
                t=false;
        }
        else if(b>=a&&b>=c)
        {
            if((a*a+c*c)!=b*b)
                t=false;
        }
        else
        {
            if((b*b+a*a)!=c*c)
                t=false;
        }
        if(t)
            pf("Case %d: yes\n",i++);
        else
            pf("Case %d: no\n",i++);
    }
    return 0;
}
