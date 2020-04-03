#include<stdio.h>
#include<math.h>
int main()
{
    double i,a,b,c,d,r1,r2;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        d=pow(b,2)-4*a*c;
        if(d<0||a==0)
        {
            printf("Impossivel calcular\n");
        }
        else
        {
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
        }
    }
    return 0;
}
