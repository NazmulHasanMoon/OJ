#include<stdio.h>
#include<math.h>
int main()
{
    double i,j,n,s;
    while(scanf("%lf",&n)!=EOF)
    {
        s=ceil(n/2);
        printf("%.lf\n",s);
    }
    return 0;
}
