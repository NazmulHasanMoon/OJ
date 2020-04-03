#include<stdio.h>
int main()
{
    long int i,j,k,n,a,b,c,d,x,y;
    double X;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        x=a+b+c+d;
        if(x<=7499)
        {
            printf("case %ld: %ld\n",i,x);
        }
        else if(x>=7500&&x<=9999)
        {
            X=x-(x*0.1);
            printf("Case %ld: %.lf\n",i,X);

        }
        else if(x>=10000)
        {
            X=x-(x*0.2);
            printf("Case %ld: %.lf\n",i,X);

        }
    }
    return 0;
}
