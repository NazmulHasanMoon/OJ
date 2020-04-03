#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double r,pi,a,A,d,area;
    pi=2*acos(0.0);
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf",&r);
        a=pi*pow(r,2);
        d=r*2;
        A=pow(d,2);
        area=A-a;
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
