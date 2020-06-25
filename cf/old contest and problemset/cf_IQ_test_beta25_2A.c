#include<stdio.h>
#define sz 101
int x[sz];
int main()
{
    int n,i,l,k,a,b;
    while(scanf("%d",&n)!=EOF)
    {
        l=0;
        k=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x[i]);
            if(x[i]%2==0)
            {
                l++;
                a=i;
            }
            else
            {
                k++;
                b=i;
            }
        }
        if(l<k)
            printf("%d\n",a);
        else
            printf("%d\n",b);
    }
    return 0;
}

