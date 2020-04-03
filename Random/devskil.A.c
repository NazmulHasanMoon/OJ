#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,t,c;
    double n,s,k,l,m;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf %lf",&n,&k);
            s=(sqrt(2*pow(n,2)));
            l=pow(s,2);
            printf("Case %d: %.lf\n",i,l);
        }
    }
    return 0;
}
