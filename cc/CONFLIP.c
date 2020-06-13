#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
int main()
{
    int t,n,r,p,q,x,y;
    sf("%d",&t);
    while(t--)
    {
        sf("%d",&n);
        while(n--)
        {
            sf("%d %d %d",&p,&q,&r);
            x=p;
            y=q/2;
            if(q&1){
                if(r!=p)
                    pf("%d\n",y+1);
                else
                    pf("%d\n",y);
                continue;
            }
            pf("%d\n",y);
        }
    }
    return 0;
}
