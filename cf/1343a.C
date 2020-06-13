#include<stdio.h>
#include<stdlib.h>
#define sf scanf
#define pf printf
int csum[34];
int main()
{
    int t,n,i,j=1;
    sf("%d",&t);
    int mx=2e9;
    for(i=1;j<31;i=i<<1)
    {
        csum[j]=csum[j-1]+i;
        j++;
    }
    while(t--)
    {
        sf("%d",&n);
        for(i=2;i<j;i++)
        {
            if(n%csum[i]==0)
            {
                pf("%d\n",n/csum[i]);
                break;
            }
        }
    }
    return 0;
}
