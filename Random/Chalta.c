#include<stdio.h>
int main()
{
    unsigned long int n,m,a,i,j,k,l;
    while(scanf("%lu %lu %lu",&n,&m,&a)!=EOF&&1<=n&&n<=1000000000&&1<=m&&m<=1000000000&&1<=a&&a<=1000000000)
    {
        unsigned long long int count,count2,sum;
        count=0;
        count2=0;
        if(n%a==0)
        {
            count=n/a;
        }
        else if(n%a!=0)
        {
            if(a>n)
            {
                count=1;
            }
            else
            {
                for(j=0;j<n;j=j+a)
                {
                    count=count+1;
                }
            }
        }
        if(m%a==0)
        {
            count2=m/a;
        }
        else if(m%a!=0)
        {
            if(a>m)
            {
                count2=1;
            }
            else
            {
                for(i=0;i<m;i=i+a)
                {
                    count2=count2+1;
                }
            }
        }
        sum=count*count2;
        printf("%llu\n",sum);
    }
    return 0;
}
