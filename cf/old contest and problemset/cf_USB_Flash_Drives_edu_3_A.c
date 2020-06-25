#include<stdio.h>
#define sz 300
int a[sz];
int main()
{
    long int i,j,k,l,m,n,count;
    while(scanf("%ld %ld",&n,&m)!=EOF)
    {
        count=0;
        l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
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
            if(count<m){
                count+=a[i];
                l++;
            }
            else
                break;
        }
        printf("%ld\n",l);
    }
    return 0;
}
