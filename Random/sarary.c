#include<stdio.h>
int main()
{
    int t,i;
    long int a,b,c;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if(a>=b&&b>c||c>=b&&b>a)
                printf("Case %d: %ld\n",i+1,b);
            else if(b>=a&&a>c||c>=a&&a>b)
                printf("Case %d: %ld\n",i+1,a);
            else
                printf("Case %d: %ld\n",i+1,c);
        }
    }
    return 0;
}
