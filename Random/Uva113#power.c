#include<stdio.h>
#include<math.h>
int main()
{
    double k,p,n;
    while(scanf("%lf %lf",&n,&p)!=EOF)
    {
        k=pow(p,1/n);
        printf("%.lf\n",k);
    }
    return 0;
}
