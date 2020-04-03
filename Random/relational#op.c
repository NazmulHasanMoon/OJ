#include<stdio.h>
int main()
{
    int t,i;
    long int a,b;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%ld %ld",&a,&b);
            if(a<b)
                printf("<\n");
            else if(a>b)
                printf(">\n");
            else
                printf("=\n");

        }

    }
    return 0;
}
