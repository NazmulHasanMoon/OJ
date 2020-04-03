#include<stdio.h>
int main()
{
    int i,j,k,t,m,l,x,T;
    while(scanf("%d",&T)!=EOF)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d %d",&m,&l);
            if(l<m)
            {
                x=(m-l);
                l=m+x;
            }
            t=19+(l*4);
            printf("Case %d: %d\n",i+1,t);
        }
    }
    return 0;
}
