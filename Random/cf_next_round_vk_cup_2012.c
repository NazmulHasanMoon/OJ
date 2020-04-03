#include<stdio.h>
#define sz 110
int a[sz];
int main()
{
    int i,j,k,n,s;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0&&i<=k)
                s=i;
        }
        if(a[k]>0)
        {
            for(i=k+1;i<=n;i++)
            {
                if(a[i]>=a[k])
                    s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;

}
