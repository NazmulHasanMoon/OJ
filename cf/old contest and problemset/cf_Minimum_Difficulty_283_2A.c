#include<stdio.h>
#define sz 100
int a[sz];
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)!=EOF)
    {
        m=32000;

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<n-1;i++)
        {
            l=-32000;
            for(j=1;j<n-1;j++){
                if(j==i)
                    k=a[j+1]-a[j-1];
                else
                    k=a[j+1]-a[j];
               // printf("%d %d ",k,a[i]);
                if(l<k)
                    l=k;
                //printf("%d ",l);
            }
            if(m>l)
                m=l;
        }
        printf("%d\n",m);
    }
    return 0;
}
