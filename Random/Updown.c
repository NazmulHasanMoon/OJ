#include<stdio.h>
int main()
{
    int i,j,k,sum,count,n,u,d,l;
    while(scanf("%d %d %d",&n,&u,&d)!=EOF)
    {
        k=0;
        sum=1;
        l=u-d;
        for(i=u;i<n;i=i+l-d)
        {
            sum=sum+1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
