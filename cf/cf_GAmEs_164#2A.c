#include<stdio.h>
int main()
{
    int i,j,k,h[101],g[101],n;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=0;i<n;i++)
        {
            scanf("%d %d",&h[i],&g[i]);
        }
        k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j&&h[i]==g[j])
                {
                    k++;
                }
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
