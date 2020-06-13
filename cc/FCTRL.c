#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
int main()
{
    int t,n,ans;
    sf("%d",&t);
    while(t--)
    {
        ans=0;
        sf("%d",&n);
        while(n)
        {
            n/=5;
            ans+=n;
        }
        pf("%d\n",ans);
    }
    return 0;
}
