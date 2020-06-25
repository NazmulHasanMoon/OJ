#include<stdio.h>
#define sz 110
int a[sz];
int main()
{
    int i,s,n,c,max;
    while(scanf("%d %d",&n,&c)!=EOF)
    {
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            s=a[i]-a[i+1]-c;
            if(max<s)
            {
                max=s;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
