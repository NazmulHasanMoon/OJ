#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n;
    double a,b,x,y,v,t,s,x1,y1,m;
    /*while(!=EOF)
    {*/
        scanf("%lf %lf",&a,&b);
        scanf("%d",&n);
        m=1000000;
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf %lf",&x,&y,&v);
            x1=a-x;y1=b-y;
            s=sqrt(pow(x1,2)+pow(y1,2));
            t=s/v;
            if(m>t)
                m=t;
        }
        printf("%.6lf\n",m);
    /*}*/
    return 0;
}
