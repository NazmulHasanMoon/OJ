#include<stdio.h>
int main()
{
    int i,T,a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T&&T<=125;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>=0&&a<=10&&b>=0&&b<=10)
        {
            c=a+b;
            printf("Case %d: %d\n",i,c);
        }

    }
    return 0;
}
