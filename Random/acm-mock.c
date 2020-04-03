#include<stdio.h>
int main()
{
    double i,n,t,j;
    scanf("%lf",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&n);
        for(j=0;j<=n;j++)
        {
            printf("%.lf",j);
            if(j<n)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
