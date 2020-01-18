#include<stdio.h>
#define sz 105
int t[sz];
int main()
{
    int n,d,i,j,l,s,count;
    while(scanf("%d %d",&n,&d)!=EOF)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&t[i]);
            count+=t[i];
        }
        s=count+(n-1)*10;
        if(s<=d)
        {
            if(s==d)
                j=(s-count)/5;
            else
                j=((s-count)/5)+((d-s)/5);
            printf("%d\n",j);
        }
        else
            printf("-1\n");
    }
    return 0;
}
