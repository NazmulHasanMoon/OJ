#include<stdio.h>
int main()
{
    int i,j,k,l,n,t,m;
        scanf("%d",&t);
        for(i=1;i<=t&&t<=100;i++)
        {
            j=0;
            l=1;
            scanf("%d %d %d",&n,&m,&k);
            if(m>=n&&n<k)
                printf("case %d: Impossible\n",i);
            else if(n>=k)
                printf("case %d: %d\n",i,l);
            else
            {
                j=n-m;
                while(j<k)
                {
                    j+=n;
                    l++;
                    if(j<k)
                    {
                        j-=m;
                    }
                }
                printf("case %d: %d\n",i,l);
            }
        }
    return 0;
}
