#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    double r,x;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%lf",&r);
            x=pow((r*2),2)-(pow(r,2)*2*acos(0));
            printf("Case %d: %.2lf\n",i+1,x);
        }
    }
    return 0;
}
