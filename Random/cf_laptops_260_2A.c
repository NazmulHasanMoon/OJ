#include<stdio.h>
int main()
{
    long int i,j,k,n,m;
    while(scanf("%ld",&n)!=EOF)
    {
        m=0;
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld",&j,&k);
            if(j==k)
                m++;
        }
        if(m==n)
            printf("Poor Alex\n");
        else
            printf("Happy Alex\n");
    }
    return 0;
}
