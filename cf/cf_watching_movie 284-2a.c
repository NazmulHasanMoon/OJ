#include<stdio.h>
int main()
{
    long int i,j,k,l,n,x,y,t,r;
   // while(scanf("%d %d",&n,&t)!=EOF)
    //{
        scanf("%d %d",&n,&t);
        x=1;
        y=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&l,&r);
            y+=(l-x)%t+r-l+1;
            x=r+1;
        }
        printf("%d\n",y);
    //}
    return 0;
}
