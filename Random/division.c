#include<stdio.h>
int main()
{
    long int a;
    int b,c,T,i,j;
    double C;
    scanf("%d\n",&T);
    for(i=1;i<=T&&T<=525;i++)
    {
        scanf("%ld %d",&a,&b);
        if(b==0)
        {
            c=b/a;
            C=(double)b/a;
            if(c==C)
                printf("Case %d: divisible\n",i);
            else
                printf("Case %d: not divisible\n",i);
        }
        else
        {
            c=a/b;
            C=(double)a/b;
            if(c==C)
                printf("Case %d: divisible\n",i);
            else
                printf("Case %d: not divisible\n",i);
        }
    }
    return 0;
}

