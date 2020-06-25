#include<stdio.h>
int main()
{
    int i,j,k,l,n,p,s,c;
    //while(scanf("%d %d %d",&n,&p,&k)!=EOF)
    //{
        scanf("%d %d %d",&n,&p,&k);
        s=p-k;
        if(s>1)
            printf("<< ");
        if(s<1)
            s=1;
        for(i=s;i<p;i++)
            printf("%d ",i);
        printf("(%d) ",p);
        s=p+k;
        for(i=p+1;i<=s&&i<=n;i++)
            printf("%d ",i);
        if(s<n)
            printf(">>");
        printf("\n");
    //}
    return 0;
}
