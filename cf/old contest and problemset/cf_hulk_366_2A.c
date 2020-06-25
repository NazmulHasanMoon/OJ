#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("I hate");
        for(i=2;i<=n;i++)
        {
            printf(" that ");
            if(i%2!=0)
                printf("I hate");
            if(i%2==0)
                printf("I love");
        }
        printf(" it\n");
    }
    return 0;
}
