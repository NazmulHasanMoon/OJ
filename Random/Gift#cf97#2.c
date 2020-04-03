#include<stdio.h>
int main()
{
    int i,j,k,a[100],n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[j]==i)
                    printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
