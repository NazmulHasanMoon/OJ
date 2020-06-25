#include<stdio.h>
int main()
{
    int i,n,j,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        if(n%2!=0)
            printf("-1\n");
        else
        {
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                    printf("%d",i-1);
                else
                    printf("%d",i+1);
                if(i<n)
                    printf(" ");
                else
                    printf("\n");
            }
        }

    }
    return 0;
}
