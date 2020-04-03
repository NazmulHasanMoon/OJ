#include<stdio.h>
int main()
{
    unsigned int x1,x2,y1,y2,T,i,j,M,x,y,a,b;
    scanf("%u",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%u %u %u %u",&x1,&y1,&x2,&y2);
        if(x1>x2)
        {
            a=x1;
            x1=x2;
            x2=a;
        }
        if(y1>y2)
        {
            b=y1;
            y1=y2;
            y2=b;
        }
        scanf("%u",&M);
        printf("Case %u:\n",i);
        for(j=1;j<=M;j++)
        {
            scanf("%u %u",&x,&y);
            if((x>x1)&&(x<x2)&&(y>y1)&&(y<y2))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
