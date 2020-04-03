#include<stdio.h>
int main()
{
    unsigned int a,b,i,T;
    scanf("%u",&T);
    for(i=1;i<=T&&1<=T&&T<=100;i++)
    {
        unsigned int j,sum=0;
        scanf("%u %u",&a,&b);
        for(j=a;j<=b&&0<=a&&a<=b&&b<=100;j++)
        {
            if(j%2==1)
            {
                sum+=j;
            }
        }
        printf("Case %u: %u\n",i,sum);
    }
    return 0;
}
