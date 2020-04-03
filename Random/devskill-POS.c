#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,t,q,s;
    double p,S,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        S=0;
        for(j=1;j<=n;j++)
        {
            scanf("%lf %d",&p,&q);
            S+=(p*q);
        }
        scanf("%lf",&c);
        printf("Case %d: %.lf\n",i,c-S);
    }
    return 0;
}
