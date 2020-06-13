#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
int main()
{
    int t;
    sf("%d",&t);
    int n,a,b,c,d,mx1,mx2,mn1,mn2;
    while(t--)
    {
        sf("%d %d %d %d %d",&n,&a,&b,&c,&d);
        mn1=(a-b)*n;
        mx1=(a+b)*n;
        mn2=(c-d);
        mx2=(c+d);
        if((mn2>=mn1&&mn2<=mx1)||(mx2>=mn1&&mx2<=mx1)||(mx1>=mn2&&mx1<=mx2)||(mn1>=mn2&&mn1<=mx2))
            pf("Yes\n");
        else
            pf("No\n");
    }

    return 0;
}
