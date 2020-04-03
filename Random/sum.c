#include<stdio.h>
int main()
{
    unsigned int i,a,b,c,T;
    scanf("%u\n",&T);
    for(i=1;i<=T&&T<=125;i++)
    {
        scanf("%u %u",&a,&b);
        c=a+b;
        printf("Case %u: %u\n",i,c);
    }
    return 0;
}
