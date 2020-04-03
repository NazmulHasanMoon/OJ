#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double n,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&n);
        s=pow((n*(n+1)/2),2);
        printf("Case %d: %.lf\n",i,s);
    }
    return 0;
}
