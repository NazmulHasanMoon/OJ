#include<stdio.h>
int main()
{
    unsigned int T,i,a,b,c;
    scanf("%u",&T);
    for(i=1;i<=T&&T<20;i++)
    {
        scanf("%u %u %u",&a,&b,&c);
        if(1000<=a&&a<=10000&&1000<=b&&b<=10000&&1000<=c&&c<=10000)
        {
            if((a>b&&b>c)||(c>b&&b>a))
            {
                printf("Case %u: %u\n",i,b);
            }
            else if((b>a&&a>c)||(c>a&&a>b))
            {
                printf("Case %u: %u\n",i,a);
            }
            else
            {
                printf("Case %u: %u\n",i,c);
            }
        }
    }
    return 0;
}
