#include<stdio.h>
#include<math.h>
#define sz 50000
int a[sz];
int main()
{
    int t,p;
    long int n,q,m,l,r,i,j,k;
    double s;
    long long S;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %d %ld",&n,&q,&p,&m);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<q;j++)
        {
            s=1;
            scanf("%ld %ld",&l,&r);
            for(k=l-1;k<r;k++)
            {
                s=s*pow((a[k]+0.0),p);
            }
            S=(int)s;
            if(j==0)
                printf("Case %d:\n",i+1);
            printf("%I64d\n",S%m);
        }
    }
    return 0;
}
