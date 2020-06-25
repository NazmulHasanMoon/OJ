#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z,a,b,c,s;
    int S;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        x=sqrt(a*b/c);
        y=sqrt(a*c/b);
        z=sqrt(b*c/a);
        //printf("%.lf %lf %lf",x,y,z);
        s=4*(x+y+z);
        S=(int)s;
        printf("%d\n",S);
    }
    return 0;
}
