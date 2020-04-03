#include<stdio.h>
#define sz 200
int f[sz];
int main()
{
    int i,j,k,l,n,m,min,p;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        min=32000;
        for(i=0;i<m;i++)
        {
            scanf("%d",&f[i]);
        }
        for(i=0;i<m-1;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(f[i]<f[j])
                {
                    k=f[i];
                    f[i]=f[j];
                    f[j]=k;
                }
            }
        }
        for(i=0;i<=m-n;i++)
        {
            p=f[i]-f[n+i-1];
            if(min>p)
            {
                min=p;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
