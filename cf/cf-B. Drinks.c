#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double s,x;
    scanf("%d",&n);
    s=0.0;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x);
        s+=x;
    }
    printf("%.4lf\n",s/n);
    return 0;
}
