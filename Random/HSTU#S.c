#include<stdio.h>
int main()
{
    int T,N,i,j,max,C[10000];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        max=0;
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
            scanf("%d",&C[j]);
            if(max<=C[j])
            {
                max=C[j];
            }
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
