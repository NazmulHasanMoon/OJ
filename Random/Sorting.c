#include<stdio.h>
int main()
{
    int i,j,k,l,m,a[100],n,temp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
