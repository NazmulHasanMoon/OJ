#include<stdio.h>
int main()
{
    int n,L,A,ev,sum,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n&&n<20;i++)
    {
        sum=0;
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            scanf("%d %d %d",&L,&A,&ev);
            sum=sum+(L*ev);
        }
        printf("%d\n",sum);
    }
    return 0;
}
