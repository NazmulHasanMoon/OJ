#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i%2==0)
                {
                    if(i%4!=0)
                    {
                        if(j<m)
                            printf(".");
                        else
                            printf("#");
                    }
                    else
                    {
                        if(j==1)
                            printf("#");
                        else
                            printf(".");
                    }
                }
                else
                    printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}
