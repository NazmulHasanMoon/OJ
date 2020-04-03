#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int T,L,N;
    int a[1000],r[1000],i,j,k,m;
    scanf("%llu",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld %lld",&L,&N);
        for(j=0;j<L;j++)
        {
            a[j]=j;
        }
        for(k=L-1,m=0;k>=0;k--,m++)
        {
            r[m]=a[k];
            if(m==N)
            {
                printf("Case %d: %d\n",i+1,r[m]);
                break;
            }
        }

    }
    return 0;

}
