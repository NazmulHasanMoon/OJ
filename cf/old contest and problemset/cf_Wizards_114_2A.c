#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double s,n,x,y,z;
    while(scanf("%lf %lf %lf",&n,&x,&y)!=EOF)
    {
        s=ceil(n*y/100);
        z=s-x;
        if(z>=0)
            printf("%.lf\n",z);
        else
            printf("0\n");
    }
    return 0;
}
