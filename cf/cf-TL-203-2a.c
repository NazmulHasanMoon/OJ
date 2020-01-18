#include<stdio.h>
#define sz 150
int a[sz],b[sz];
int main()
{
    int min1,max,i,j,k,l,n,m,t,v;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    v=2*a[0];
    max=a[n-1];
    min1=3200;
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        if(min1>b[i])
            min1=b[i];
            //printf("%d\n",min1);
    }
    //printf("%d %d %d\n",v,max,min1);
    if(v<min1)
    {
        if(v>=max)
        {
            printf("%d\n",v);
            return 0;
        }
        if(a[n-1]<min1){
            printf("%d\n",a[n-1]);
            return 0;
        }
        else
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
