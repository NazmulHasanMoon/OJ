#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,i;
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        x=y=z=0;
        for(i=1;i<=6;i++)
        {
            if(fabs(a-i)<fabs(b-i))
                x++;
            else if(fabs(a-i)>fabs(b-i))
                z++;
            else
                y++;
        }
        printf("%d %d %d\n",x,y,z);
    }
    return 0;
}
