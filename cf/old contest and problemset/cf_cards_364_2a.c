#include<stdio.h>
#define sz 101
int x[sz],y[sz],z[sz];
int main()
{
    int n,i,j,k,l,min,max,s;
    while(scanf("%d",&n)!=EOF)
    {
        //scanf("%d",&n);
        min=32000;
        max=-32000;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x[i]);
           y[i]=x[i];
        }

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(x[i]>x[j])
                {
                    k=x[i];
                    x[i]=x[j];
                    x[j]=k;
                }
            }
        }
        l=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++){
                if(y[j]==x[i]){
                    z[i]=j;
                    y[j]=0;
                    break;
                }
            }
        }
        for(i=1,j=n;i<=n/2;i++,j--)
            printf("%d %d\n",z[i],z[j]);
    }
    return 0;
}
