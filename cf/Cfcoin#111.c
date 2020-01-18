#include<stdio.h>
int main()
{
    int n,a[200],k,j,i,sum,count,l;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        count=0;
        l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            count+=a[i];
            l++;
            if(count>sum/2)
                break;
        }
        printf("%d\n",l);
    }
    return 0;
}
