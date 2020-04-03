#include<stdio.h>
int main()
{
    int t,n,a,s,i,j,k;
    char c;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            c=getchar();
            scanf("%d",&n);
            s=0;
            for(j=0;j<n;j++)
            {
                scanf("%d",&a);
                if(a>0)
                {
                    s+=a;
                }
            }
            printf("Case %d: %d\n",i+1,s);
        }
    }
    return 0;
}
