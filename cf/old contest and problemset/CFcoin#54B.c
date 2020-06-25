#include<stdio.h>
int main()
{
    int i,n,j,k,a[1000],l,x;
    while(scanf("%d",&n)!=EOF)
    {
        l=0;
        x=n;
        for(i=0;n>2;i++)
        {
            if(n%2==0)
            {
                n=n/2;
                a[i]=n;
                l++;
            }
            else
                break;
        }
        /*for(i=0;i<l-1;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]<a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
        }*/
        printf("%d ",x);
        for(i=0;i<l;i++)
        {
            printf("%d ",a[i]);
        }
        printf("1\n");
    }
    return 0;
}
