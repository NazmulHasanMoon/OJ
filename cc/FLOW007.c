#include<stdio.h>
#define sf scanf
#define pf printf
int main()
{
    int t,n,rem,ans,i;
    sf("%d",&t);
    while(t--)
    {
        sf("%d",&n);
        ans=0;
        while(n)
        {
            rem=n%10;
            ans=ans*10+rem;
            n/=10;
        }
        pf("%d\n",ans);
    }
    return 0;
}
