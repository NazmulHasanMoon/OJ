#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int a,b,i;
    unsigned long int A,j,X;
    float V;

    for(i=1;i<=201;i++)
    {
        scanf("%lu %lu",&a,&b);
        if(a==0&&b==0)
            break;

        X = 0;

        for(j=a;j<=b;j++)
        {
            A= V = sqrt(j);
            if(A == V)
            {
                X=X+1;
            }
        }
        printf("%lu\n",X);


    }
    return 0;
}
/*#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int a,b,i;
    for(i=1;i<=201;i++)
    {
        scanf("%lu %lu",&a,&b);
        unsigned long int A,j,X=0;
        if(0<a&&0<b&&a<=b&&b<=100000)
        {
            for(j=a;j<=b;j++)
            {
                A=sqrt(j);
            }
            for(j=a;j<=b;j++)
            {
                if(j%A==0)
                {
                    X=X+1;
                }
            }
            printf("%lu\n",X);
        }
        if(a==0&&b==0)
            break;
    }
    return 0;
}*/
