#include<stdio.h>

int main()
{
    int i,j,l,N,K,P,t;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&N,&K,&P);
            l=K;
            for(j=1;j<=P;j++)
            {
                K++;
                if(K<=N)
                {
                    l++;
                }
                else
                {
                    l=K-N;
                    if(l>N)
                    {
                        while(!(l<=N))
                        {
                            l=l-N;
                        }
                    }
                }
            }
            printf("Case %d: %d\n",i,l);
        }
    }
    return 0;
}
