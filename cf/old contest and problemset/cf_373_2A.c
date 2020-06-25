#include<stdio.h>
#define sz 100
int a[sz];
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(n==1){
            if(a[0]==0)
                printf("UP\n");
            else if(a[0]==15)
                printf("DOWN\n");
            else
                printf("-1\n");
        }
        else if((a[n-1]!=15&&a[n-1]>a[n-2])||a[n-1]==0)
            printf("UP\n");
        else if((a[n-1]<a[n-2])||a[n-1]==15)
            printf("DOWN\n");
    }
    return 0;
}
