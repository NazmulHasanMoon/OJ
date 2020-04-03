#include<stdio.h>
int main()
{
    int T,i,C,d;
    double X;
    scanf("%d",&T);
    for(i=1;i<=T&&T<=100;i++)
    {
        scanf("%d %d",&C,&d);
        if(0<=C&&C<=100&&0<=d&&d<=100)
        {
            X=C+((d*5.0)/9);
            printf("Case %d: %.2lf\n",i,X);
        }
    }
    return 0;
}
