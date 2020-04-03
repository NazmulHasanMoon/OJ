#include<stdio.h>
int main()
{
    int i,N;
    double a,b,c,A,B,C,s;
    while(scanf("%d",&N)!=EOF)
    {
        A=2;B=3;C=5;
        for(i=1;i<=N;i++)
        {
            scanf("%lf %lf %lf",&a,&b,&c);
            s=((a*A)+(b*B)+(c*C))/(A+B+C);
            printf("%.1lf\n",s);
        }
    }
    return 0;
}
