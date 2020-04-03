#include<stdio.h>
int main()
{
    long int i,j,n,m,s,count;
    while(scanf("%ld %ld",&n,&m)!=EOF)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                s=i+j;
                if(s%5==0)
                {
                    count=count+1;
                }
            }
        }
        printf("%ld\n",count);
    }
    return 0;
}
